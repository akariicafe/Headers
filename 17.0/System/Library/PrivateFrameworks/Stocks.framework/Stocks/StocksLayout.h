@class StockChartDisplayMode;

@interface StocksLayout : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } listViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } infoViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } chartViewFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } newsViewFrame;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } listViewContentInsets;
@property (nonatomic) BOOL infoViewHasBottomLine;
@property (nonatomic) BOOL newsViewHasBottomLine;
@property (nonatomic) BOOL chartViewHasBottomLine;
@property (nonatomic) BOOL newsViewShouldUseLargerFonts;
@property (nonatomic) BOOL chartViewHasTapGesture;
@property (nonatomic) BOOL hasScrollView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scrollViewFrame;
@property (nonatomic) struct CGSize { double width; double height; } scrollViewContentSize;
@property (nonatomic) BOOL infoViewInScrollView;
@property (nonatomic) BOOL chartViewInScrollView;
@property (nonatomic) BOOL newsViewInScrollView;
@property (nonatomic) BOOL hasBlurView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } blurViewFrame;
@property (nonatomic) BOOL hasGrayView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } grayViewFrame;
@property (nonatomic) BOOL hasSecondaryGrayView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondaryGrayViewFrame;
@property (nonatomic) BOOL hasStatusView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } statusViewFrame;
@property (nonatomic) BOOL hasStatusViewDivider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } statusViewDividerFrame;
@property (nonatomic) BOOL hasPrimaryHorizontalDivider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryHorizontalDividerFrame;
@property (nonatomic) BOOL hasSecondaryHorizontalDivider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondaryHorizontalDividerFrame;
@property (nonatomic) BOOL hasPrimaryVerticalDivider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } primaryVerticalDividerFrame;
@property (nonatomic) BOOL hasSecondaryVerticalDivider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } secondaryVerticalDividerFrame;
@property (nonatomic) unsigned long long listViewRowCount;
@property (nonatomic) double statusViewCenteringRatio;
@property (retain, nonatomic) StockChartDisplayMode *chartDisplayMode;
@property (nonatomic) BOOL hasBlackView;
@property (nonatomic) BOOL isFullScreenChart;

+ (id)layoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)fullScreenChartLayoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)numberOfRowsForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)singleColumnPortraitLayoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)threeColumnsLandscapeLayoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)twoColumnsLandscapeLayoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)twoColumnsPortraitLayoutForSize:(struct CGSize { double x0; double x1; })a0;

- (id)description;
- (void).cxx_destruct;

@end
