@class NSTimeZone, NSString, NSArray, PLPlatterHeaderContentView, UIView, NSDate, UIButton;

@interface PLTitledPlatterView : PLPlatterView <PLPlatterInternal, PLTitled, PLContentSizeCategoryAdjusting> {
    PLPlatterHeaderContentView *_headerContentView;
}

@property (nonatomic, getter=isSashHidden) BOOL sashHidden;
@property (nonatomic, getter=isLargerHeaderMarginEnabled) BOOL largerHeaderMarginEnabled;
@property (readonly, nonatomic) UIView *customContentView;
@property (nonatomic) BOOL hasShadow;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *icons;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, nonatomic) NSArray *iconButtons;
@property (readonly, nonatomic) UIButton *utilityButton;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (void)_configureHeaderContentView;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setUtilityView:(id)a0;
- (void)setBackgroundView:(id)a0;
- (id)utilityView;
- (void)_layoutHeaderViews;
- (BOOL)headerHeedsHorizontalLayoutMargins;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_mainContentFrame;
- (void)setNeedsLayout;
- (void)setHeaderHeedsHorizontalLayoutMargins:(BOOL)a0;
- (void).cxx_destruct;
- (void)_configureHeaderContentViewIfNecessary;
- (void)layoutSubviews;
- (id)_headerContentView;

@end
