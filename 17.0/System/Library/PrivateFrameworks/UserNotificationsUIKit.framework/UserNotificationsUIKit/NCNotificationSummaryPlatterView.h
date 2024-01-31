@class NSString, NSArray, NSDate, UIView, NCNotificationSummaryContentView;

@interface NCNotificationSummaryPlatterView : PLPlatterView <NCNotificationSummaryContentDisplaying, NCNotificationListDimmable> {
    NCNotificationSummaryContentView *_summaryContentView;
    UIView *_stackDimmingView;
}

@property (copy, nonatomic) NSString *summaryTitle;
@property (copy, nonatomic) NSString *summary;
@property (retain, nonatomic) NSArray *summaryIconViews;
@property (nonatomic, getter=isIconViewLeading) BOOL iconViewLeading;
@property (copy, nonatomic) NSString *summaryTitleFontName;
@property (copy, nonatomic) NSDate *summaryDate;
@property (copy, nonatomic) NSString *summaryIconSymbolName;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithRecipe:(long long)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)_updateStackDimmingVisualStyling;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)didMoveToSuperview;
- (void)_configureSummaryContentViewIfNecessary;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
