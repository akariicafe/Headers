@interface CMFitnessJuniorGoals : NSObject

+ (BOOL)isAvailable;
+ (unsigned long long)recommendedMoveMinutesForLevel:(long long)a0 userInfo:(id)a1 error:(id *)a2;

- (id)init;
- (void)dealloc;

@end
