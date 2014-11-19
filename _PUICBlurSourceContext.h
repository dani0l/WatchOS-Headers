//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary, UIColor, UIImage;

@interface _PUICBlurSourceContext : NSObject
{
    NSHashTable *_blurViews;
    UIImage *_snapshotImage;
    UIColor *_averageColor;
    CDUnknownBlockType _colorPreparedCallback;
    NSMutableDictionary *_blurImages;
    id _movedToWindowObserver;
}

@property(retain, nonatomic) id movedToWindowObserver; // @synthesize movedToWindowObserver=_movedToWindowObserver;
@property(retain, nonatomic) NSMutableDictionary *blurImages; // @synthesize blurImages=_blurImages;
@property(copy, nonatomic) CDUnknownBlockType colorPreparedCallback; // @synthesize colorPreparedCallback=_colorPreparedCallback;
@property(retain, nonatomic) UIColor *averageColor; // @synthesize averageColor=_averageColor;
@property(retain, nonatomic) UIImage *snapshotImage; // @synthesize snapshotImage=_snapshotImage;
- (void).cxx_destruct;
- (void)enumerateBlurViewsWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasBlurViews;
- (void)removeBlurView:(id)arg1;
- (void)addBlurView:(id)arg1;
- (id)init;

@end

