@interface SUMediaItemCellConfiguration : SUItemCellConfiguration

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } artworkSize;
@property (readonly, nonatomic) long long mediaIconType;
@property (readonly, nonatomic) BOOL showContentRating;

+ (id)copyDefaultContext;

- (id)initWithStringCount:(unsigned long long)a0 imageCount:(unsigned long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_ratingBorderInsets;
- (double)alphaForImageAtIndex:(unsigned long long)a0 fromAlpha:(double *)a1 withModifiers:(unsigned long long)a2;
- (double)alphaForLabelAtIndex:(unsigned long long)a0 fromAlpha:(double *)a1 withModifiers:(unsigned long long)a2;
- (id)copyImageDataProvider;
- (void)drawWithModifiers:(unsigned long long)a0;
- (id)fontForLabelAtIndex:(unsigned long long)a0;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;

@end
