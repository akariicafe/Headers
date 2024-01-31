@interface PXAppIntentsExtendedTraitCollection : PXExtendedTraitCollection

@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic) double displayScale;

- (void)unregisterObservations;
- (long long)layoutSizeSubclass;
- (void)registerObservations;
- (long long)layoutSizeClass;
- (id)initWithUserInterfaceStyle:(long long)a0 displayScale:(double)a1;

@end
