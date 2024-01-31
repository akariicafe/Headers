@interface CMCalorieUtils : NSObject

+ (BOOL)isAvailable;
+ (struct CLBodyMetrics { int x0; int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; int x10; float x11; BOOL x12; float x13; BOOL x14; BOOL x15; BOOL x16; })CLBodyMetricsFromCMCalorieUserInfo:(id)a0 error:(id *)a1;
+ (id)lookupCalorieDataForCMWorkoutType:(long long)a0 duration:(double)a1 error:(id *)a2;
+ (id)lookupCalorieDataForCMWorkoutType:(long long)a0 duration:(double)a1 userInfo:(id)a2 error:(id *)a3;

@end
