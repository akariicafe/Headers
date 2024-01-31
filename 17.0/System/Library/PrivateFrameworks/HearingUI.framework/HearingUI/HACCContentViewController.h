@class UIViewController, NSString, UIViewPropertyAnimator, UIView, CCUIContentModuleDetailTransitioningDelegate, UITapGestureRecognizer;
@protocol HACCContentModule, CCUIContentModuleContentViewController;

@interface HACCContentViewController : UIViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {
    unsigned long long _controlType;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer;
@property (retain, nonatomic) UIView<HACCContentModule> *contentView;
@property (retain, nonatomic) UIViewController<CCUIContentModuleContentViewController> *expandedViewController;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } collapsedFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (void)updateViewConstraints;
- (void)updateWithValue:(id)a0;
- (void)_handleTapGestureRecognizer:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)value;
- (void)updateValue;
- (id)_axIdentifierForModule:(unsigned long long)a0;
- (void)addExpandedView:(id)a0;
- (id)contentViewForControlType:(unsigned long long)a0 module:(unsigned long long)a1 delegate:(id)a2;
- (unsigned long long)controlTypeForModule:(unsigned long long)a0;
- (id)initWithContentModule:(unsigned long long)a0 andDelegate:(id)a1;
- (void)removeExpandedView:(id)a0;

@end
