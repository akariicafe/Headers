@interface CSAlertBehaviorPredictor : NSObject

+ (long long)predictStartAlertBehaviorFor:(long long)a0 avSystemController:(id)a1 hasAOP:(BOOL)a2 supportVibrator:(BOOL)a3 isiOS:(BOOL)a4 isWatchOS:(BOOL)a5 isHorseman:(BOOL)a6 isBridgeOS:(BOOL)a7 recordRoute:(id)a8 playbackRoute:(id)a9;
+ (long long)predictStartAlertBehaviorFor:(long long)a0 recordRoute:(id)a1 playbackRoute:(id)a2;

@end
