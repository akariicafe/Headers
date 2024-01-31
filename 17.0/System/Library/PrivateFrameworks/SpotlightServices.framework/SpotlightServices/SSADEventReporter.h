@interface SSADEventReporter : NSObject

+ (void)reportModelLoadingError;
+ (void)reportBadDirectivesForModelType:(unsigned long long)a0;
+ (void)reportBadL2Models;
+ (void)reportBadL3Models;
+ (void)reportModelDeletionForType:(unsigned long long)a0;
+ (void)reportKey:(id)a0;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)a0;

@end
