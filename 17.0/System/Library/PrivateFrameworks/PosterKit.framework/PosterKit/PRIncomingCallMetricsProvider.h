@interface PRIncomingCallMetricsProvider : NSObject

@property (class, readonly, nonatomic) double minimumContentSize;
@property (class, readonly, nonatomic) double verticalTextMinYScreenHeightMultiplier;
@property (class, readonly, nonatomic) double verticalTextMaxYScreenHeightMultiplier;
@property (class, readonly, nonatomic) unsigned long long maxVerticalTextLength;
@property (class, readonly, nonatomic) double maxVerticalTextHeight;
@property (class, readonly, nonatomic) double horizontalTextEdgePadding;
@property (class, readonly, nonatomic) double maxHorizontalTextWidth;

+ (id)preferredContentSizeCategory;
+ (double)horizontalTextEdgePaddingForContentSizeCategory:(id)a0;
+ (BOOL)kashidaCanBeAppliedToText:(id)a0 withFont:(id)a1;
+ (id)mapContentSizeFactor;

@end
