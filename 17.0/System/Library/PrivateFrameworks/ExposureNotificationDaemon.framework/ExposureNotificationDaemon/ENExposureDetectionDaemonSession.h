@class ENRegionServerConfiguration, ENExposureDatabase, ENExposureConfiguration, NSDate, ENRegionServerExposureConfiguration, NSObject, ENRegionConfiguration, ENExposureClassification, ENAdvertisementDatabaseQuerySession, ENExposureDetectionHistorySession, ENExposureCalculationSession, ENXPCClient, ENExposureDetectionDaemonSessionStatistics;
@protocol OS_dispatch_queue;

@interface ENExposureDetectionDaemonSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _signpostID;
    ENExposureDetectionDaemonSessionStatistics *_statistics;
    BOOL _finished;
    BOOL _prepared;
    BOOL _shouldCopyStatistics;
    BOOL _useCache;
}

@property (retain, nonatomic) ENAdvertisementDatabaseQuerySession *advertisementDatabaseQuerySession;
@property (retain, nonatomic) ENXPCClient *client;
@property (retain, nonatomic) ENExposureConfiguration *clientExposureConfiguration;
@property (retain, nonatomic) ENExposureDatabase *exposureDatabase;
@property (retain, nonatomic) ENExposureClassification *previousExposureClassification;
@property (copy, nonatomic) ENRegionConfiguration *regionConfiguration;
@property (copy, nonatomic) ENRegionServerConfiguration *regionServerConfiguration;
@property (copy, nonatomic) ENRegionServerExposureConfiguration *serverExposureConfiguration;
@property (copy, nonatomic) NSDate *sessionDate;
@property (readonly, nonatomic) ENExposureDetectionHistorySession *historySession;
@property (readonly, copy, nonatomic) ENExposureConfiguration *sessionExposureConfiguration;
@property (nonatomic) unsigned long long tekMatchBatchSize;
@property (readonly, copy, nonatomic) ENExposureDetectionDaemonSessionStatistics *statistics;
@property (nonatomic) BOOL skipFileSigningVerification;
@property (readonly, nonatomic) ENExposureCalculationSession *exposureCalculationSession;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void)_signpostBegin;
- (id)description;
- (void).cxx_destruct;
- (void)_signpostEnd;
- (id)finishAndReturnError:(id *)a0;
- (BOOL)prepareAndReturnError:(id *)a0;
- (void)_addFileToHistoryWithHash:(id)a0 metadata:(id)a1 endpoint:(id)a2 keyCount:(unsigned long long)a3 matchCount:(unsigned long long)a4;
- (BOOL)_addMatchesFromFileSession:(id)a0 publicKey:(id)a1 endpoint:(id)a2 error:(id *)a3;
- (BOOL)_checkFinishedAndReturnError:(id *)a0;
- (BOOL)_checkPreparedAndReturnError:(id *)a0;
- (BOOL)_classifyExposureWithResult:(id)a0 error:(id *)a1;
- (id)_finishAndReturnError:(id *)a0;
- (id)_getAnalysisSessionAndReturnError:(id *)a0;
- (id)_getBeaconCountMetricsAndReturnError:(id *)a0;
- (id)_getSummaryAndReturnError:(id *)a0;
- (BOOL)_prepareAndReturnError:(id *)a0;
- (id)_prepareExposureCalculationSessionWithError:(id *)a0;
- (BOOL)_shouldMatchPersistenKey:(id)a0;
- (void)_updateStatisticsWithHandler:(id /* block */)a0;
- (BOOL)_verifySignatureForFileSession:(id)a0 publicKey:(id)a1 error:(id *)a2;
- (BOOL)addMatchesFromFileSession:(id)a0 publicKey:(id)a1 endpoint:(id)a2 error:(id *)a3;
- (BOOL)classifyExposureWithResult:(id)a0 error:(id *)a1;
- (id)getAnalysisSessionAndReturnError:(id *)a0;
- (id)getBeaconCountMetricsAndReturnError:(id *)a0;
- (id)getSummaryAndReturnError:(id *)a0;
- (BOOL)prepareConfiguration:(id)a0 bundleIdentifier:(id)a1 nowDate:(id)a2 expiryInterval:(double)a3 error:(id *)a4;

@end
