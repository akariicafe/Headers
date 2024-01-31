@interface SGQuickResponsesToRobots : NSObject

+ (void)warmup;
+ (id)contactStore;
+ (float)allCapsRatio:(id)a0;
+ (BOOL)insignificantSender:(id)a0;
+ (BOOL)presentInContext:(id)a0 context:(id)a1 startIdx:(long long)a2 endIdx:(long long)a3;
+ (id)repliesToRobot:(id)a0 language:(id)a1 recipients:(id)a2;
+ (id)repliesToRobot:(id)a0 language:(id)a1 recipients:(id)a2 config:(id)a3;

@end
