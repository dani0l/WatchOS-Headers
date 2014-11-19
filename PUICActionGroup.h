//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, PUICActionItem, UIView;

@interface PUICActionGroup : NSObject
{
    _Bool _dismissesActionControllerOnSelection;
    NSArray *_actionItems;
    long long _actionStyle;
    UIView *_headerView;
    NSString *_message;
    PUICActionItem *_noContentActionItem;
    NSString *_noContentMessage;
}

@property(nonatomic) _Bool dismissesActionControllerOnSelection; // @synthesize dismissesActionControllerOnSelection=_dismissesActionControllerOnSelection;
@property(copy, nonatomic) NSString *noContentMessage; // @synthesize noContentMessage=_noContentMessage;
@property(copy, nonatomic) PUICActionItem *noContentActionItem; // @synthesize noContentActionItem=_noContentActionItem;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) long long actionStyle; // @synthesize actionStyle=_actionStyle;
@property(copy, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
- (void).cxx_destruct;
- (void)_postDidUpdateNotification;
@property(readonly, nonatomic) long long _effectiveActionStyle;
- (void)setActionStyle:(long long)arg1;
- (id)initWithActionItems:(id)arg1 actionStyle:(long long)arg2;

@end
