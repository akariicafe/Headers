@class MUPlaceCallToActionAppearance, MKMapItem;

@interface MUPlaceRatingAndSubmissionStatusRibbonViewModel : MUPlaceRibbonItemViewModel

@property (readonly, nonatomic) MKMapItem *mapItem;
@property (retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;

- (BOOL)isTappable;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)_ratingState;
- (id)typeStringForAX;
- (BOOL)_canBeRated;
- (void)_updateStringProviders;
- (id)initWithMapItem:(id)a0 submissionStatus:(id)a1;

@end
