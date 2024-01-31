@class NSDictionary, NSSet;

@interface ATXNotificationsSuggestionLROutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long wantTurnOff;
@property (retain, nonatomic) NSDictionary *turnOffProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithWantTurnOff:(long long)a0 turnOffProbability:(id)a1;

@end
