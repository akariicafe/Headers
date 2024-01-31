@class NSTimeZone, NSString, NSArray, NCDigestSummaryView, NSDate, UIView;
@protocol NCNotificationSummaryContentProviding;

@interface NCDigestSummaryPlatterView : PLPlatterView <NCDigestSummaryDisplaying, PLContentSizeCategoryAdjusting> {
    NCDigestSummaryView *_summaryView;
}

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (copy, nonatomic) NSString *heading;
@property (copy, nonatomic) NSString *subheading;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL presentFeaturedNotificationsInline;
@property (retain, nonatomic) NSArray *featuredNotificationContentProviders;
@property (retain, nonatomic) id<NCNotificationSummaryContentProviding> communicationsSummaryContentProvider;
@property (retain, nonatomic) id<NCNotificationSummaryContentProviding> appsSummaryContentProvider;
@property (retain, nonatomic) UIView *clearControlView;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithRecipe:(long long)a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)updateContent;
- (void)didMoveToSuperview;
- (void)setMaterialGroupNameBase:(id)a0;
- (void).cxx_destruct;
- (id)requiredVisualStyleCategories;
- (void)_configureSummaryViewIfNecessary;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
