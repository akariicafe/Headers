@interface MNTraceNetworkConditionHelper : NSObject

+ (BOOL)setCurrentState:(id)a0;
+ (BOOL)setWiFiEnabled:(BOOL)a0;
+ (BOOL)deviceSupportsCellularData;
+ (BOOL)isWiFiEnabled;
+ (id)getCurrentState;
+ (id)activeNLCProfile;
+ (id)availableNLCProfiles;
+ (BOOL)disableNLC;
+ (BOOL)enableNLC:(id)a0;
+ (id)getNLCProfile:(id)a0;
+ (BOOL)hasActiveNetworkConditionInducer;
+ (BOOL)isCellDataEnabled;
+ (id)nlcProfiles;
+ (BOOL)setCellDataEnabled:(BOOL)a0;

@end
