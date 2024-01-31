@class NSString, NSXPCConnection;

@interface _OSInactivityPredictionClient : NSObject <_OSInactivityPredictionProtocol_Private, _OSInactivityPredictionProtocol>

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)longInactivityPredictionResultWithHandler:(id /* block */)a0;
- (double)recommendedWaitTime;
- (id)init;
- (BOOL)restoreRecommendedWaitTime;
- (void)dealloc;
- (id)modelMetadata;
- (id)backedUpData;
- (void)overrideRecommendedWaitTimeTo:(double)a0 withHandler:(id /* block */)a1;
- (id)unfixModelOutput;
- (void)modelDescriptionWithHandler:(id /* block */)a0;
- (void)restoreRecommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)unfixModelOutputWithHandler:(id /* block */)a0;
- (void)hasEnoughInactivityHistoryWithHandler:(id /* block */)a0;
- (id)fixModelOutput:(id)a0;
- (BOOL)hasEnoughInactivityHistory;
- (BOOL)restoreInactivityModel;
- (void)modelMetadataWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)modelDescription;
- (id)longInactivityPredictionResultWithOptions:(long long)a0 withError:(id *)a1;
- (void)backedUpDataWithHandler:(id /* block */)a0;
- (id)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withError:(id *)a3;
- (id)longInactivityPredictionResultWithError:(id *)a0;
- (void)restoreInactivityModelWithHandler:(id /* block */)a0;
- (void)deviceUsageDiagnosisWithHandler:(id /* block */)a0;
- (void)inactivityHistoryDiagnosisWithHandler:(id /* block */)a0;
- (id)deviceUsageDiagnosis;
- (void)fixModelOutput:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)overrideRecommendedWaitTimeTo:(double)a0;
- (void)recommendedWaitTimeWithHandler:(id /* block */)a0;
- (void)longInactivityPredictionResultWithOptions:(long long)a0 withHandler:(id /* block */)a1;
- (id)inactivityHistoryDiagnosis;
- (void)longInactivityPredictionResultAtDate:(id)a0 withTimeSinceInactive:(double)a1 withOptions:(long long)a2 withHandler:(id /* block */)a3;

@end
