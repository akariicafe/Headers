@class NSSet;

@interface ATXNotificationsSuggestionLRInput : NSObject <MLFeatureProvider>

@property (nonatomic) double appPopularity;
@property (nonatomic) double totalLaunches;
@property (nonatomic) double received;
@property (nonatomic) double ignored;
@property (nonatomic) double cleared;
@property (nonatomic) double engaged;
@property (nonatomic) double defaultActions;
@property (nonatomic) double orbs;
@property (nonatomic) double suppActions;
@property (nonatomic) double tapCoalesce;
@property (nonatomic) double engage_rate;
@property (nonatomic) double app_bias;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithAppPopularity:(double)a0 totalLaunches:(double)a1 received:(double)a2 ignored:(double)a3 cleared:(double)a4 engaged:(double)a5 defaultActions:(double)a6 orbs:(double)a7 suppActions:(double)a8 tapCoalesce:(double)a9 engage_rate:(double)a10 app_bias:(double)a11;

@end
