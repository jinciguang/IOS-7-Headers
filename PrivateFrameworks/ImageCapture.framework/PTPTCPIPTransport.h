/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ImageCapture/PTPTransport.h>

@class NSMutableData, NSString, PTPTCPIPConnection;

@interface PTPTCPIPTransport : PTPTransport
{
    struct __CFSocket *_socket;
    NSString *_hostName;
    unsigned short _hostPort;
    NSString *_hostGUID;
    NSString *_targetName;
    NSString *_targetAddress;
    unsigned long _targetPort;
    NSString *_targetGUID;
    id _connectionRequestResponse;
    unsigned long _connectionNumber;
    PTPTCPIPConnection *_tempConnection;
    NSMutableData *_tempData;
    PTPTCPIPConnection *_cdConnection;
    PTPTCPIPConnection *_eventConnection;
    NSMutableData *_cdData;
    NSMutableData *_eventData;
    BOOL _delegateNeedsData;
}

- (int)waitForCallbackThreadConditionSignalWithTimeoutForConnection:(long)arg1;
- (int)waitForCallbackThreadConditionSignalWithTimeout:(long)arg1;
- (void)handleData:(id)arg1 from:(id)arg2;
- (void)didCloseConnection:(id)arg1 withError:(CDStruct_1ef3fb1f)arg2;
- (void)acceptConnectionFromSocket:(int)arg1;
- (void)releaseConnections;
- (void)cancelTransaction:(id)arg1;
- (BOOL)sendEvent:(id)arg1;
- (BOOL)sendResponse:(id)arg1;
- (void)sendData:(id)arg1;
- (void)sendDataPackets:(id)arg1;
- (id)sendRequest:(id)arg1 sendData:(id)arg2 timeout:(unsigned long)arg3;
- (id)sendRequest:(id)arg1 receiveData:(id)arg2 timeout:(unsigned long)arg3;
- (BOOL)sendCancel:(id)arg1;
- (BOOL)sendStartData:(id)arg1;
- (id)description;
- (BOOL)connected;
- (void)stop;
- (BOOL)startInitiator;
- (BOOL)waitForConnectionWithTimeout:(double)arg1;
- (BOOL)startResponder;
- (id)targetGUID;
- (unsigned long)targetPort;
- (id)targetAddress;
- (id)targetName;
- (void)dealloc;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6 delegate:(id)arg7;
- (id)initForAcceptedSocketWithDelegate:(id)arg1 andHostGUID:(id)arg2 andHostName:(id)arg3;
- (id)initWithHostPort:(unsigned long)arg1 hostName:(id)arg2 hostGUID:(id)arg3 bonjourServiceType:(id)arg4 bonjourTXTRecords:(id)arg5 delegate:(id)arg6;

@end
