@class NSDate, MTRDeviceController, NSArray, MTRAsyncCallbackWorkQueue, NSMutableDictionary, MTRWeakReference, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface MTRDevice : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) unsigned char fabricIndex;
@property (retain, nonatomic) MTRWeakReference *weakDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSArray *unreportedEvents;
@property (nonatomic) BOOL subscriptionActive;
@property (nonatomic) unsigned int lastSubscriptionAttemptWait;
@property (nonatomic) BOOL reattemptingSubscription;
@property (retain, nonatomic) NSMutableDictionary *readCache;
@property (retain, nonatomic) NSMutableDictionary *expectedValueCache;
@property (nonatomic) unsigned long long expectedValueNextID;
@property (nonatomic) BOOL expirationCheckScheduled;
@property (retain, nonatomic) NSDate *estimatedStartTimeFromGeneralDiagnosticsUpTime;
@property (nonatomic) void *currentReadClient;
@property (readonly, nonatomic) MTRDeviceController *deviceController;
@property (readonly, copy, nonatomic) NSNumber *nodeID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) MTRAsyncCallbackWorkQueue *asyncCallbackWorkQueue;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSDate *estimatedStartTime;

+ (id)deviceWithNodeID:(id)a0 controller:(id)a1;
+ (id)deviceWithNodeID:(unsigned long long)a0 deviceController:(id)a1;

- (void)invalidate;
- (id)description;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)_changeState:(unsigned long long)a0;
- (void)nodeMayBeAdvertisingOperational;
- (BOOL)_attributeDataValue:(id)a0 isEqualToDataValue:(id)a1;
- (id)_attributeValueDictionaryForAttributePath:(id)a0;
- (void)_checkExpiredExpectedValues;
- (id)_getAttributesToReportWithNewExpectedValues:(id)a0 expirationTime:(id)a1 expectedValueID:(unsigned long long *)a2;
- (id)_getAttributesToReportWithReportedValues:(id)a0;
- (void)_handleAttributeReport:(id)a0;
- (void)_handleEventReport:(id)a0;
- (void)_handleResubscriptionNeeded;
- (void)_handleSubscriptionError:(id)a0;
- (void)_handleSubscriptionEstablished;
- (void)_handleSubscriptionReset;
- (void)_handleUnsolicitedMessageFromPublisher;
- (void)_performScheduledExpirationCheck;
- (void)_reattemptSubscriptionNowIfNeeded;
- (void)_removeExpectedValueForAttributePath:(id)a0 expectedValueID:(unsigned long long)a1;
- (void)_reportAttributes:(id)a0;
- (void)_setExpectedValue:(id)a0 attributePath:(id)a1 expirationTime:(id)a2 shouldReportValue:(BOOL *)a3 attributeValueToReport:(id *)a4 expectedValueID:(unsigned long long)a5;
- (void)_setupSubscription;
- (BOOL)_subscriptionAbleToReport;
- (id)initWithNodeID:(id)a0 controller:(id)a1;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 clientQueue:(id)a7 completion:(id /* block */)a8;
- (void)invokeCommandWithEndpointID:(id)a0 clusterID:(id)a1 commandID:(id)a2 commandFields:(id)a3 expectedValues:(id)a4 expectedValueInterval:(id)a5 timedInvokeTimeout:(id)a6 queue:(id)a7 completion:(id /* block */)a8;
- (id)newBaseDevice;
- (void)openCommissioningWindowWithDiscriminator:(id)a0 duration:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)openCommissioningWindowWithSetupPasscode:(id)a0 discriminator:(id)a1 duration:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (id)readAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 params:(id)a3;
- (void)removeExpectedValueForAttributePath:(id)a0 expectedValueID:(unsigned long long)a1;
- (void)removeExpectedValuesForAttributePaths:(id)a0 expectedValueID:(unsigned long long)a1;
- (void)setExpectedValues:(id)a0 expectedValueInterval:(id)a1;
- (void)setExpectedValues:(id)a0 expectedValueInterval:(id)a1 expectedValueID:(unsigned long long *)a2;
- (void)writeAttributeWithEndpointID:(id)a0 clusterID:(id)a1 attributeID:(id)a2 value:(id)a3 expectedValueInterval:(id)a4 timedWriteTimeout:(id)a5;

@end
