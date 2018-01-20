/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl <_UIFloatingContentViewDelegate> {
    bool  _cellHasReorderingAppearance;
    UITapGestureRecognizer * _downArrowButtonRecognizer;
    _UIFloatingContentView * _floatingContentView;
    UIPanGestureRecognizer * _panRecognizer;
    UITapGestureRecognizer * _upArrowButtonRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_arrowButton:(long long)arg1;
- (void)_beginIndirectTracking;
- (void)_downArrowButton:(id)arg1;
- (void)_endIndirectTracking;
- (void)_panRecognizer:(id)arg1;
- (bool)_shouldHandlePressEvent:(id)arg1;
- (void)_upArrowButton:(id)arg1;
- (void)_updateFloatingViewForCurrentTraits;
- (void)_updateFocusedFloatingContentView:(bool)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)initWithTableViewCell:(id)arg1;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)wantsMaskingWhileAnimatingDisabled;

@end