//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "PUICCrownInputSequencerDelegate.h"

@class NSString, PUICCrownInputSequencer;

@interface UIScrollView (PUICAdditions) <PUICCrownInputSequencerDelegate>
+ (void)load;
- (void)_puic_setContentOffset:(struct CGPoint)arg1 notifyDelegate:(_Bool)arg2;
- (id)_puic_contentOffsetAnimator;
- (double)_puic_crownInputSequencerOffsetForContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)_puic_contentOffsetForCrownInputSequencerOffset:(double)arg1;
- (void)_puic_configureCrownInputSequencerLengthForScrollViewContentSize;
- (void)_puic_configureCrownInputSequencer;
- (void)_puic_setContentInset:(struct UIEdgeInsets)arg1;
- (void)_puic_setContentSize:(struct CGSize)arg1;
- (void)_puic_notifyDidScroll;
- (void)hideCrownIndicator;
- (void)showCrownIndicator;
- (id)_puic_associatedObject;
- (_Bool)_puic_hasEnqueuedContentOffsetAnimations;
- (void)_puic_additivelySetContentOffset:(struct CGPoint)arg1;
- (_Bool)crownInputSequencer:(id)arg1 shouldRubberBandAtBoundary:(long long)arg2;
- (void)crownInputSequencerActiveDetentDidChange:(id)arg1;
- (void)crownInputSequencerIdleDidChange:(id)arg1;
- (void)crownInputSequencerOffsetDidChange:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
@property(readonly, nonatomic, getter=puic_crownInputSequencer) PUICCrownInputSequencer *crownInputSequencer;
@property(readonly, nonatomic, getter=puic_existingCrownInputSequencer) PUICCrownInputSequencer *existingCrownInputSequencer;
- (_Bool)canBecomeFirstResponder;
@property(nonatomic, getter=puic_crownInputScrollDirection, setter=puic_setCrownInputScrollDirection:) long long crownInputScrollDirection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

