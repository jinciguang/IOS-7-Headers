/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOLocationShiftRequest, GEOPolyLocationShiftRequest, PBRequest;

@interface GEOLocationShiftFunctionRequest : NSObject
{
    unsigned short _providerID;
    GEOLocationShiftRequest *_locationShiftRequest;
    GEOPolyLocationShiftRequest *_polyLocationShiftRequest;
}

@property(readonly, nonatomic) PBRequest *shiftRequest;
@property(nonatomic) CDStruct_c3b9c2ee coordinate;
@property(nonatomic) unsigned short providerID; // @synthesize providerID=_providerID;
- (void)dealloc;

@end
