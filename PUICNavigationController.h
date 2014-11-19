//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class PUICNavigationDefaultTransition;

@interface PUICNavigationController : UINavigationController
{
    PUICNavigationDefaultTransition *_animationController;
}

@property(retain, nonatomic) PUICNavigationDefaultTransition *animationController; // @synthesize animationController=_animationController;
- (void).cxx_destruct;
- (void)willMoveToParentViewController:(id)arg1;
- (_Bool)_viewControllerUnderlapsStatusBar;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_navigationBarHiddenByDefault:(_Bool)arg1;
- (id)navigationBar;
- (void)viewDidLoad;
- (id)interactivePopGestureRecognizer;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)__commonInit;

@end

