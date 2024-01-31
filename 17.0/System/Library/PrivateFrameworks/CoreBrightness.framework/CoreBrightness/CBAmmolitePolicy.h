@class NSString, CBChromaticCorrectionParams;

@interface CBAmmolitePolicy : NSObject <CBChromaticCorrectionPolicy>

@property (retain) CBChromaticCorrectionParams *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (const char *)name;
- (float)cappedRampStartLux:(float)a0;
- (float)cappedRampTargetLux:(float)a0;
- (id)finishedNotification;
- (id)isEnabledPropertyKey;
- (BOOL)luxIsInActiveRange:(float)a0;
- (BOOL)nitsAreInActiveRange:(float)a0;
- (float)rampTargetLuxCap;
- (id)runningNotification;
- (id)strengthNotification;

@end
