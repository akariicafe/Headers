@class NSString, NSDate, NSObject, NSUserDefaults;
@protocol OS_os_log;

@interface _GDSServerConnection : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double configVersion;
@property (retain, nonatomic) NSDate *configFetchDate;
@property (retain, nonatomic) NSString *serverURL;
@property (nonatomic) BOOL isCASupported;
@property (nonatomic) BOOL isCECSupported;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)platform;
+ (id)dateFormatter;
+ (id)dateFromString:(id)a0;
+ (id)osBuildVersion;
+ (id)dateStringFromDate:(id)a0;
+ (id)fetchConfigWithError:(id *)a0;
+ (id)queryItemsMetaParams;

- (id)init;
- (void).cxx_destruct;
- (id)fetchBalancingAuthorityPolygons;
- (void)loadConfigState;
- (void)checkServerConfiguration;
- (id)dataFromLocation:(id)a0;
- (id)fetchBalancingAuthorityFromLocation:(id)a0;
- (id)fetchCarbonIntensityHistoryForBA:(id)a0 from:(id)a1 to:(id)a2;
- (id)fetchMarginalEmissionForecastFor:(id)a0;
- (id)getFakeSecret;
- (id)getFakeSecretVersion;
- (id)getFakeServerURL;
- (id)getRequestForEndpoint:(id)a0 withData:(id)a1 keySequence:(id)a2;
- (void)handleNewConfig:(id)a0;
- (id)postRequestForEndpoint:(id)a0 withData:(id)a1;

@end
