@class NSUUID, NSString, IRMiLoConnectionBridge, NSObject;
@protocol OS_dispatch_queue, IRMiLoProviderObserverProtocol;

@interface IRMiLoProvider : NSObject <CLMiLoConnectionDelegate, IRMiLoFeedbackProvider>

@property (nonatomic) BOOL isMiLoServiceStateRunning;
@property (nonatomic) long long miLoServiceQuality;
@property (nonatomic) long long miLoServiceQualityReasonBitmap;
@property (retain, nonatomic) NSUUID *serviceUuid;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<IRMiLoProviderObserverProtocol> observer;
@property int miLoConnectionProgressStatus;
@property int numberOfConsecutiveMiLoFailAttempts;
@property (retain, nonatomic) NSString *miloServiceStatusStringQE;
@property (nonatomic) BOOL isLowLatency;
@property (retain, nonatomic) NSUUID *requestSinglePredictionIdentifierRealTime;
@property (nonatomic) BOOL isRealTimeMiLoRequestedForPowerOptimizations;
@property (retain, nonatomic) IRMiLoConnectionBridge *miloConnectionBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)MiLoLocationTypeToIRLocationSemantic:(id)a0;
+ (BOOL)isQualityValid:(long long)a0;
+ (long long)bitmapFromServiceQualityReasonArray:(id)a0;
+ (BOOL)isConfidenceValid:(long long)a0;
+ (BOOL)isInMotion:(unsigned long long)a0;

- (id)initWithQueue:(id)a0;
- (void)removeObserver;
- (void).cxx_destruct;
- (void)miLoConnection:(id)a0 connectServiceDidFailWithServiceIdentifier:(id)a1 withError:(id)a2;
- (void)miLoConnection:(id)a0 createServiceDidFailWithError:(id)a1;
- (void)miLoConnection:(id)a0 deleteServiceDidFailForServiceWithIdentifier:(id)a1 withError:(id)a2;
- (void)miLoConnection:(id)a0 didCompleteClientRequest:(id)a1 withError:(id)a2;
- (void)miLoConnection:(id)a0 didCreateServiceWithServiceIdentifier:(id)a1;
- (void)miLoConnection:(id)a0 didDeleteServiceWithServiceIdentifier:(id)a1;
- (void)miLoConnection:(id)a0 didUpdatePrediction:(id)a1;
- (void)miLoConnection:(id)a0 didUpdateServiceStatus:(id)a1;
- (void)miLoConnection:(id)a0 disconnectServiceDidFailWithServiceIdentifier:(id)a1 withError:(id)a2;
- (void)miLoConnection:(id)a0 queryServiceDidFailWithError:(id)a1;
- (id)requestSinglePredictionRealTime;
- (void)_createLslConnectionIfNecessaryAndConnectWithNServiceUuid:(id)a0;
- (id)_miloPredictionLogString:(id)a0;
- (id)_miloServiceStatusLogStringFromStatus:(id)a0;
- (void)_serviceReset;
- (void)addObserver:(id)a0 withServiceUuid:(id)a1 isLowLatency:(BOOL)a2;
- (void)connectToLslService;
- (void)deleteServiceWithUuid:(id)a0;
- (id)getMiloServiceStatusStringQEWithPrediction:(id)a0;
- (void)labelPredictionUuid:(id)a0 withEventUuid:(id)a1;
- (void)recoverServiceIfRequired:(id)a0;
- (void)serviceResetAndIncreaseFailCount;
- (BOOL)startLowLatencyMiLoAndRequestSinglePredictionRealTime:(id *)a0;

@end
