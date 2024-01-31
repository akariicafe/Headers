@class NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface _OSChargingPredictor : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)predictor;

- (id)init;
- (void)dealloc;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (id)fixModelOutput:(id)a0;
- (void).cxx_destruct;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (id)chargePredictionOutputOfScheme:(unsigned long long)a0 withError:(id *)a1;
- (int)expectedMinimumDischarge;
- (BOOL)isDeepDischargeExpected;
- (BOOL)longChargeExpected;
- (BOOL)longChargeExpectedWithConfidence:(double)a0;
- (double)predictedChargeDuration;
- (double)timeUntilNextExpectedPlugin;
- (double)timeUntilNextExpectedPluginWithConfidence:(double)a0;

@end
