/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSMutableArray, WDDocument, WDStyle;

__attribute__((visibility("hidden")))
@interface WDListDefinition : NSObject <NSCopying>
{
    int mType;
    NSMutableArray *mLevels;
    long mListId;
    WDDocument *mDocument;
    WDStyle *mListStyle;
    WDStyle *mListStyleLink;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocument:(id)arg1;
- (id)document;
- (void)setListId:(long)arg1;
- (long)listId;
- (void)setListStyleLink:(id)arg1;
- (id)listStyleLink;
- (void)setListStyle:(id)arg1;
- (id)listStyle;
- (id)addLevel;
- (id)levelAt:(int)arg1;
- (int)levelCount;
- (void)setType:(int)arg1;
- (int)type;

@end
