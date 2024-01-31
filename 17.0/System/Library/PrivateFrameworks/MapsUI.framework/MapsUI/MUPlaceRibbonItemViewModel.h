@class NSString;
@protocol MUPlaceRibbonItemViewModelUpdateDelegate;

@interface MUPlaceRibbonItemViewModel : NSObject

@property (weak, nonatomic) id<MUPlaceRibbonItemViewModelUpdateDelegate> updateDelegate;
@property (nonatomic, getter=isTappable) BOOL tappable;
@property (copy, nonatomic) id /* block */ titleStringProvider;
@property (copy, nonatomic) id /* block */ valueStringProvider;
@property (copy, nonatomic) NSString *preferredAccessibilityValue;
@property (retain, nonatomic) NSString *typeStringForAX;
@property (nonatomic) long long type;

+ (id)amenityItemViewForMapItem:(id)a0 amenityItemConfiguration:(id)a1;
+ (id)costItemViewForMapItem:(id)a0;
+ (id)distanceFromCurrentLocationItemViewModelForDistanceString:(id)a0;
+ (id)distanceFromCurrentLocationItemViewModelForMapItem:(id)a0 currentLocationCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)factoidItemForFactoid:(id)a0;
+ (id)guidesItemViewModelForMapItem:(id)a0;
+ (id)hoursItemViewModelForMapItem:(id)a0;
+ (id)ratingSubmissionStatusViewModelForRatingState:(long long)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
