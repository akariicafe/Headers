@class UILabel, NSArray, NSString;

@interface AXUIBannerView : AXUIPlatterContainerView

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *secondaryTextLabel;
@property (retain, nonatomic) NSArray *withSecondaryTextConstraints;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) double defaultPlatterToTextVerticalSpacing;
@property (readonly, nonatomic) double platterToTextHorizontalSpacing;
@property (readonly, nonatomic) double defaultTitleToSubtitleVerticalSpacing;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (double)platterWidth;
- (void)_updateSecondaryTextVisibility;

@end
