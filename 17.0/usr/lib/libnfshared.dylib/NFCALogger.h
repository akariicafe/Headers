@class NSUserDefaults;

@interface NFCALogger : NSObject {
    NSUserDefaults *_userDefault;
}

+ (id)sharedCALogger;
+ (unsigned int)getBatteryPercent;

- (id)init;
- (id)generateDailyUUIDForCA;
- (id)getCALoggerUserDefaults;
- (void)removeRestrictedMode;
- (BOOL)restrictedMode;
- (BOOL)_incrementMiddlewareExceptionCountWithReset:(BOOL)a0;
- (void).cxx_destruct;
- (void)setRestrictedMode:(BOOL)a0;
- (id)generateUUID;
- (unsigned int)getHardwareTypeForCA:(unsigned int)a0;
- (void)resetCALoadStackExceptionCount;
- (void)getCAUniversityCode:(id)a0 universityCodes:(unsigned int *)a1;
- (unsigned long long)getMiddlewareExceptionCount;
- (unsigned long long)getTimestamp;
- (void)postCAEventFor:(id)a0 eventInput:(id)a1;
- (unsigned int)getDurationFrom:(unsigned long long)a0;

@end
