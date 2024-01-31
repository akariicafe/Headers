@interface HKHealthChecklistUtilities : NSObject

+ (id)shared;

- (BOOL)isEmergencySOSAvailable;
- (BOOL)isHealthAppVisibleAndInstalled;
- (BOOL)isHealthChecklistAvailable;
- (BOOL)isMedicalIDAvailable;

@end
