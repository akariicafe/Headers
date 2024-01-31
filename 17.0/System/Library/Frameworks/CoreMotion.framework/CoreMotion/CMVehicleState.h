@interface CMVehicleState : NSObject

+ (unsigned long long)isVehicleBasedOnDeviceId:(id)a0 deviceType:(int)a1;
+ (id)mostRecentInVehicle;
+ (unsigned long long)vehicularHints;
+ (unsigned long long)vehicularState;
+ (unsigned long long)vehicularOperatorState;
+ (BOOL)isAvailable;
+ (id)mostRecentVehicleConnection;

@end
