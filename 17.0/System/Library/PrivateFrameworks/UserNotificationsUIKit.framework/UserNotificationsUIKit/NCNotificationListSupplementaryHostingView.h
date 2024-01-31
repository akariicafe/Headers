@class UIColor, NCAuxiliaryOptionsView, NSString, PLPlatterView, UIView, NSArray, NCNotificationListStackBackgroundDimmingView;
@protocol NCNotificationListSupplementaryHostingViewDelegate;

@interface NCNotificationListSupplementaryHostingView : NCDimmableView <UIGestureRecognizerDelegate, NCAuxiliaryOptionsSupporting, NCMaterialDisplaying, PLContentSizeCategoryAdjusting> {
    NCNotificationListStackBackgroundDimmingView *_backgroundTintView;
    UIView *_viewToBlockOutOfProcessUIInteractions;
}

@property (readonly, nonatomic, getter=hasContentForAuxiliaryOptions) BOOL contentForAuxiliaryOptions;
@property (retain, nonatomic) UIView *hostedView;
@property (nonatomic, getter=isHostedViewUserInteractionEnabled) BOOL hostedViewUserInteractionEnabled;
@property (weak, nonatomic) id<NCNotificationListSupplementaryHostingViewDelegate> delegate;
@property (readonly, nonatomic) PLPlatterView *platterView;
@property (readonly, nonatomic) NCAuxiliaryOptionsView *auxiliaryOptionsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (retain, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, nonatomic) NSArray *auxiliaryOptionButtons;
@property (copy, nonatomic) UIColor *auxiliaryOptionsTextColor;
@property (nonatomic) long long materialRecipe;
@property (copy, nonatomic) UIColor *materialTintColor;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (id)init;
- (void)_blockOutOfProcessUIInteractions:(BOOL)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_setContinuousCornerRadius:(double)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_configureAuxiliaryOptionsViewIfNecessary;
- (void)_configurePlatterViewIfNecessary;
- (void)_layoutAuxiliaryOptionsView;
- (void)_layoutHostedView;
- (void)_tapGestureRecognized:(id)a0;
- (void).cxx_destruct;
- (void)_configureBackgroundTintViewIfNecessary;
- (void)_configureViewToBlockOutOfProcessUIInteractionsIfNecessary;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
