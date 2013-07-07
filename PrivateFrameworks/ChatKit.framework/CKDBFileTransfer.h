/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "CKFileTransfer.h"

@class NSDictionary, NSError, NSString, NSURL;

@interface CKDBFileTransfer : NSObject <CKFileTransfer>
{
    NSString *_guid;
    NSURL *_fileURL;
    NSDictionary *_transcoderUserInfo;
    id <CKMessage> _message;
    NSString *_filename;
    int _transferState;
}

@property(nonatomic) int transferState; // @synthesize transferState=_transferState;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) id <CKMessage> message; // @synthesize message=_message;
@property(readonly, nonatomic) NSDictionary *transcoderUserInfo; // @synthesize transcoderUserInfo=_transcoderUserInfo;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)mediaObjectRemoved;
- (void)mediaObjectAdded;
@property(readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property(readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property(readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property(readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady;
@property(readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized;
@property(readonly, nonatomic) unsigned long long totalBytes;
@property(readonly, nonatomic) unsigned long long currentBytes;
@property(readonly, nonatomic) NSError *error;
- (id)initWithTransferGUID:(id)arg1 message:(id)arg2;
- (id)initWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2;
- (id)description;
- (void)dealloc;

@end
