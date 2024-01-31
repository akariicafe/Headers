@interface IRRuleEngine : NSObject

+ (id)new;
+ (id)executeRules:(id)a0 withCandiatesContainer:(id)a1 systemStatus:(id)a2 historyEventsContainer:(id)a3 miloPrediction:(id)a4 nearbyDeviceContainer:(id)a5 date:(id)a6;

- (id)init;

@end
