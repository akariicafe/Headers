@class NSNumber;

@interface TVCarouselLayout : TVViewLayout

@property (nonatomic) double interitemSpacing;
@property (nonatomic) long long layoutType;
@property (nonatomic) struct CGSize { double width; double height; } cellSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cellPadding;
@property (nonatomic) unsigned long long scrollMode;
@property (nonatomic) double focusedEdgeExpansion;
@property (nonatomic) double revealDistance;
@property (nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (nonatomic) double shearAngle;
@property (nonatomic) BOOL showsPageControl;
@property (nonatomic) NSNumber *pageControlMarginNumber;

+ (long long)layoutTypeForElement:(id)a0;
+ (long long)layoutTypeForString:(id)a0;
+ (id)layoutWithLayout:(id)a0 element:(id)a1;
+ (unsigned long long)scrollModeForString:(id)a0;

- (BOOL)isEqual:(id)a0;

@end
