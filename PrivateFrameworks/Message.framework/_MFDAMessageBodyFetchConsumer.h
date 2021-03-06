/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DAMailAccountStreamConsumerFactory.h"
#import "MFRequestQueueResponseConsumer.h"

@class MFError, NSData;

@interface _MFDAMessageBodyFetchConsumer : NSObject <MFRequestQueueResponseConsumer, DAMailAccountStreamConsumerFactory>
{
    id <MFDAStreamingContentConsumer> _streamConsumer;
    BOOL _succeeded;
    MFError *_error;
    NSData *_data;
}

@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
@property(retain, nonatomic) id <MFDAStreamingContentConsumer> streamConsumer; // @synthesize streamConsumer=_streamConsumer;
- (void)dealloc;
- (id)streamingContentConsumer;
@property(readonly, nonatomic) BOOL succeeded; // @synthesize succeeded=_succeeded;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (BOOL)wantsData;

@end

