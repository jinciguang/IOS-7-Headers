/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSTimer, SSMetricsConfiguration, SSXPCConnection;

@interface SSMetricsController : NSObject
{
    SSXPCConnection *_connection;
    SSMetricsConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_flushSerialQueue;
    BOOL _flushTimerEnabled;
    NSTimer *_flushEventsTimer;
}

@property(nonatomic, getter=isFlushTimerEnabled) BOOL flushTimerEnabled; // @synthesize flushTimerEnabled=_flushTimerEnabled;
- (void)setPageConfiguration:(id)arg1;
- (void)setGlobalConfiguration:(id)arg1;
- (id)serialQueue;
- (id)pingURLs;
- (void)insertEvents:(id)arg1 withCompletionHandler:(id)arg2;
- (void)insertEvent:(id)arg1 withCompletionHandler:(id)arg2;
- (BOOL)isDisabled;
- (void)flushUnreportedEventsWithCompletionHandler:(id)arg1;
- (id)configuration;
- (void)_setupFlushTimer;
- (void)_handleFlushTimer;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(id)arg2;
- (id)_connection;
- (void)dealloc;
- (id)init;

@end

