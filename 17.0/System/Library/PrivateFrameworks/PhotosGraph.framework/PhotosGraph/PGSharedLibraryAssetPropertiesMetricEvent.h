@class NSArray, NSDictionary, NSString, PGManagerWorkingContext, NSMutableDictionary;

@interface PGSharedLibraryAssetPropertiesMetricEvent : PGPhotosChallengeMetricEvent <PLMultiplePayloadsMetricEvent> {
    PGManagerWorkingContext *_workingContext;
    NSMutableDictionary *_payloadByAssetIdentifier;
}

@property (retain, nonatomic) NSDictionary *resultsByAssetIdentifier;
@property (readonly, nonatomic) NSArray *payloads;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;
- (id)initWithWorkingContext:(id)a0 questionMetricType:(unsigned short)a1 metricEventFetchHelper:(id)a2;

@end
