@interface ATXMotion : NSObject

@property (readonly, nonatomic) long long motiontype;
@property (readonly, nonatomic) BOOL stationary;
@property (readonly, nonatomic) BOOL canPredictClipsGivenRecentMotion;

+ (id)summarizeActivityStream:(id)a0;
+ (id)getMotionStringFromMotionType:(long long)a0;
+ (long long)_getMotionTypeFromCMMotionActivity:(id)a0;
+ (id)_getMotionStringFromCMMotionActivity:(id)a0;
+ (id)findMostCommonAndRecent:(id)a0 identityFunc:(id /* block */)a1;
+ (BOOL)canPredictClipsForActivityStream:(id)a0;

- (id)initWithMotionType:(long long)a0 stationary:(BOOL)a1 canPredictClipsGivenRecentMotion:(BOOL)a2;
- (id)print;
- (id)initFromCMMotionActivity:(id)a0 canPredictClipsGivenRecentMotion:(BOOL)a1;
- (id)initFromCMMotionActivity:(id)a0;
- (id)getMotionString;

@end
