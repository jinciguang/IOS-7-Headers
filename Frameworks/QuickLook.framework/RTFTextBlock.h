/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface RTFTextBlock : NSObject <NSCopying>
{
    void *_propVals;
    unsigned int _propMask;
    unsigned int _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void *_blockPrimary;
    void *_blockSecondary;
}

- (id)_attributeDescription;
- (void)setBorderColor:(id)arg1;
- (id)borderColorForEdge:(unsigned int)arg1;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned int)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (unsigned int)verticalAlignment;
- (void)setVerticalAlignment:(unsigned int)arg1;
- (void)setWidth:(float)arg1 type:(unsigned int)arg2 forLayer:(int)arg3;
- (unsigned int)widthValueTypeForLayer:(int)arg1 edge:(unsigned int)arg2;
- (float)widthForLayer:(int)arg1 edge:(unsigned int)arg2;
- (void)setWidth:(float)arg1 type:(unsigned int)arg2 forLayer:(int)arg3 edge:(unsigned int)arg4;
- (unsigned int)contentWidthValueType;
- (float)contentWidth;
- (void)setContentWidth:(float)arg1 type:(unsigned int)arg2;
- (unsigned int)valueTypeForDimension:(unsigned int)arg1;
- (float)valueForDimension:(unsigned int)arg1;
- (void)setValue:(float)arg1 type:(unsigned int)arg2 forDimension:(unsigned int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (unsigned int)_valueTypeForParameter:(unsigned int)arg1;
- (float)_valueForParameter:(unsigned int)arg1;
- (void)_setValue:(float)arg1 type:(unsigned int)arg2 forParameter:(unsigned int)arg3;
- (void)dealloc;
- (void)_destroyFloatStorage;
- (void)_createFloatStorage;
- (id)init;

@end

