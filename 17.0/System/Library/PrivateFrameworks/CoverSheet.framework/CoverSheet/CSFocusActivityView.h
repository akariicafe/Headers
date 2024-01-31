@class NSString, UIView, CSFocusActivityIndicator, _UILegibilitySettings;
@protocol FCActivityDescribing, CSFocusActivityViewDelegate;

@interface CSFocusActivityView : CSCoverSheetViewBase <SBUILegibility> {
    CSFocusActivityIndicator *_activityIndicator;
}

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) id<FCActivityDescribing> activity;
@property (readonly, nonatomic) UIView *activityIndicator;
@property (weak, nonatomic) id<CSFocusActivityViewDelegate> delegate;
@property (readonly, nonatomic) BOOL isActivityIndicatorVisible;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })activityViewSize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_handleButtonPress:(id)a0;
- (void)removeIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_activityIndicatorFrame;
- (void)_addActivityIndicatorTargetActions;
- (void)_handleButtonTouchBegan:(id)a0;
- (void)_handleButtonTouchEnded:(id)a0;
- (void)_removeActivityIndicatorTargetActions;

@end
