//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer;

@interface GraphViewSegment : NSObject
{
    double avghistory[33];
    double rssihistory[33];
    int index;
    CALayer *layer;
}

@property(readonly, nonatomic) CALayer *layer; // @synthesize layer;
- (void).cxx_destruct;
- (id)accessibilityValue;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)addAvg:(double)arg1 liveRSSI:(double)arg2;
- (_Bool)isVisibleInRect:(struct CGRect)arg1;
- (_Bool)isFull;
- (void)reset;
- (id)init;

@end

