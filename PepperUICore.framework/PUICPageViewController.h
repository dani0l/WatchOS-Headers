//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"
#import "_PUICPagePickerViewDelegate.h"

@class NSArray, NSMutableSet, NSString, UIAutoRotatingWindow, UIScrollView, UIView, _PUICPagePickerView;

@interface PUICPageViewController : UIViewController <UIScrollViewDelegate, _PUICPagePickerViewDelegate>
{
    UIView *_containerView;
    UIScrollView *_pagingScrollView;
    NSArray *_pages;
    UIAutoRotatingWindow *_pagePickerViewWindow;
    _PUICPagePickerView *_pagePickerView;
    NSMutableSet *_visiblePages;
    double _pageIndexOfViewportMinX;
    double _pageIndexOfViewportMaxX;
    _Bool _pendingForwardedAppearanceTransition;
    _Bool _pagePickingEnabled;
    _Bool _magnificationEnabled;
    id <PUICPageViewControllerDataSource> _dataSource;
    unsigned long long _selectedIndex;
}

@property(nonatomic, getter=isMagnificationEnabled) _Bool magnificationEnabled; // @synthesize magnificationEnabled=_magnificationEnabled;
@property(nonatomic, getter=isPagePickingEnabled) _Bool pagePickingEnabled; // @synthesize pagePickingEnabled=_pagePickingEnabled;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <PUICPageViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_updateSelectedPageIndex;
- (void)_layoutViewsForPages;
- (void)_prepareViewsForPages;
- (void)_updatePages;
- (void)_updateVisiblePages;
- (id)_mostVisiblePage;
- (void)_setPageSnapshotsEnabled:(_Bool)arg1;
- (void)pagePickerViewDidUpdateSelectedPageItemIndex:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setPagePickingEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (id)puic_applicationStatusBarItem;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)reloadDataSource;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIViewController *topViewController;
@property(readonly, nonatomic) UIViewController *selectedViewController;
- (id)_pickerView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

