@interface PXPhotosHeaderCustomizationModel : PXObservable <PXMutableHeaderCustomizationModel>

@property (readonly, nonatomic) long long titleTextStyle;
@property (readonly, nonatomic) long long subtitleTextStyle;
@property (readonly, nonatomic) BOOL shouldUseTextStyles;
@property (readonly, nonatomic) double verticalVisibilityOffset;
@property (readonly, nonatomic) double verticalFloatingOffset;
@property (readonly, nonatomic) double alpha;

- (id)init;
- (void)setAlpha:(double)a0;
- (void)setShouldUseTextStyles:(BOOL)a0;
- (void)setVerticalFloatingOffset:(double)a0;
- (void)setVerticalVisibilityOffset:(double)a0;

@end
