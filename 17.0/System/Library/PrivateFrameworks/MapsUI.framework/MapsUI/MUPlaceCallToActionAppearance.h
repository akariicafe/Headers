@interface MUPlaceCallToActionAppearance : MKUGCCallToActionViewAppearance

@property (readonly, nonatomic) long long type;
@property (nonatomic) unsigned long long numberOfPhotosAdded;

+ (id)userRecommendedAppearanceForNumberOfPhotosAdded:(unsigned long long)a0;
+ (id)userRecommendedAppearanceForRatingState:(long long)a0;
+ (id)userRecommendedAppearanceForRatingState:(long long)a0 numberOfPhotosAdded:(unsigned long long)a1;
+ (id)userRecommendedLoadingAppearance;

- (unsigned long long)hash;
- (id)initWithType:(long long)a0;
- (BOOL)isEqual:(id)a0;

@end
