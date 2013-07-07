/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAlbumContainer.h"
#import "PLAssetContainerListChangeObserver.h"

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>
{
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

+ (struct NSObject *)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
@property(nonatomic) int filter; // @synthesize filter=_filter;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (BOOL)isEmpty;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containers;
@property(readonly, nonatomic) NSString *_typeDescription;
@property(readonly, nonatomic) NSString *_prettyDescription;
- (id)photoLibrary;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
@property(readonly, nonatomic) id albumsSortingComparator;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
- (BOOL)canEditAlbums;
- (int)albumListType;
- (id)managedObjectContext;
@property(readonly, nonatomic) unsigned int unreadAlbumsCount;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, nonatomic) unsigned int albumsCount;
- (id)albums;
- (id)identifier;
- (void)assetContainerListDidChange:(id)arg1;
- (void)_invalidateAllAlbums;
- (void)dealloc;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

@end
