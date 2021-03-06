/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEOTileLoader : NSObject
{
}

+ (id)diskCacheLocation;
+ (void)setDiskCacheLocation:(id)arg1;
+ (void)setMemoryCacheTotalCostLimit:(unsigned int)arg1;
+ (void)setMemoryCacheCountLimit:(unsigned int)arg1;
+ (void)setTrackUsage:(BOOL)arg1;
+ (void)useLocalLoader;
+ (void)useRemoteLoader;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
+ (id)modernLoader;
+ (id)singletonConfiguration;
+ (id)sharedLoader;
+ (void)setMemoryCacheMinCapacity:(unsigned int)arg1;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (id)internalDelegateQ;
- (void)setInternalDelegateQ:(id)arg1;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(id)arg3;
@property(readonly, nonatomic) int networkHits;
@property(readonly, nonatomic) int diskHits;
@property(readonly, nonatomic) int memoryHits;
- (void)registerTileDecoder:(id)arg1;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)expireTilesWithPredicate:(id)arg1;
- (void)clearAllCaches;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned int)arg4 callbackQ:(id)arg5 beginNetwork:(id)arg6 callback:(void)arg7;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(id)arg2;
- (id)expireTilesWithType:(unsigned char)arg1 provider:(unsigned short)arg2 olderThan:(double)arg3;
- (void)cancelRequest:(id)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)preloadTiles:(id)arg1 requireWiFi:(BOOL)arg2 progress:(id)arg3 finished:(void)arg4 error:(id)arg5;
- (void)loadTilesFromCache:(id)arg1 progress:(id)arg2 finished:(void)arg3 error:(id)arg4;
- (void)loadTilesFromCacheAndNetwork:(id)arg1 progress:(id)arg2 finished:(void)arg3 error:(id)arg4;
- (void)loadTiles:(id)arg1 progress:(id)arg2 finished:(void)arg3 error:(id)arg4;
- (void)_loadTiles:(id)arg1 options:(unsigned int)arg2 progress:(id)arg3 finished:(void)arg4 error:(id)arg5;
- (id)renderDataForKey:(struct _GEOTileKey *)arg1 asyncHandler:(id)arg2;
- (id)renderDataForKey:(struct _GEOTileKey *)arg1;
- (void)openDatabase;
- (void)closeDatabase;

@end

