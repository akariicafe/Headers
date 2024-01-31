@class MKPointOfInterestFilter;

@interface MKStandardMapConfiguration : MKMapConfiguration

@property (readonly, nonatomic, getter=_allowsTerrainModePromotion) BOOL allowsTerrainModePromotion;
@property (nonatomic, getter=_showsHiking, setter=_setShowsHiking:) BOOL showsHiking;
@property (nonatomic) long long emphasisStyle;
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) BOOL showsTraffic;

+ (BOOL)supportsSecureCoding;
+ (BOOL)_overlaysRequireModernMap:(id)a0;
+ (BOOL)_overlaysSupportElevation:(id)a0;
+ (BOOL)_overlaySupportsElevation:(id)a0;
+ (BOOL)_overlayRequiresModernMap:(id)a0;

- (id)init;
- (id)initWithElevationStyle:(long long)a0 emphasisStyle:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void)_addObserver:(id)a0 options:(unsigned long long)a1 context:(void *)a2;
- (void)_removeObserver:(id)a0 context:(void *)a1;
- (id)initWithElevationStyle:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithEmphasisStyle:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToStandardMapConfiguration:(id)a0;

@end
