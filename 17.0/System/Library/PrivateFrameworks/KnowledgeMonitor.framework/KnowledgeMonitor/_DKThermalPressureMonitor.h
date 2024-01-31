@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;
@property (nonatomic) int peakPowerPressureToken;
@property (nonatomic) BOOL peakPowerPressureLevel;

+ (id)eventStream;
+ (id)entitlements;

- (id)loadState;
- (void)setCurrentThermalLevel:(int)a0;
- (void)saveState;
- (void)dealloc;
- (void)start;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)setCurrentPeakPowerPressureLevel:(unsigned int)a0;
- (void)getPeakPowerPressureLevelWithToken:(int)a0;
- (void)deactivate;

@end
