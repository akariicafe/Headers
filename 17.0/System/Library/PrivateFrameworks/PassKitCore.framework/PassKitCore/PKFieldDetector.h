@class PKFieldProperties, NSString, NFLoyaltyAndPaymentSession, NFDigitalCarKeySession, NSHashTable, NSObject, NFFieldDetectSession;
@protocol NFSession, OS_dispatch_source, OS_dispatch_queue, PKFieldDetectorDelegate;

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate, NFDigitalCarKeySessionDelegate> {
    NFFieldDetectSession *_fieldDetectSession;
    unsigned long long _fieldDetectSessionRetryCount;
    BOOL _fieldDetectSessionRequested;
    BOOL _nfcRadioEnabled;
    PKFieldProperties *_fieldPropertiesToLookup;
    NFLoyaltyAndPaymentSession *_fieldPropertiesLookupLoyaltySession;
    NFDigitalCarKeySession *_fieldPropertiesLookupDigitalCarKeySession;
    NSObject<NFSession> *_fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> *_fieldPropertiesLookupTimer;
    unsigned long long _fieldPropertieslookupSynchronizer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_observers;
    unsigned long long _enablePersistentFieldDetectionReasons;
    PKFieldProperties *_fieldProperties;
    NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, weak, nonatomic) PKFieldProperties *fieldProperties;
@property (weak, nonatomic) id<PKFieldDetectorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRadioState;
- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)_endLookup;
- (void)sessionDidEndUnexpectedly:(id)a0;
- (void)fieldDetectSession:(id)a0 didEnterFieldWithNotification:(id)a1;
- (void)setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)unregisterObserver:(id)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didPerformValueAddedServiceTransactions:(id)a1;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)a0;
- (void)loyaltyAndPaymentSession:(id)a0 didEndTransaction:(id)a1;
- (void)_setPersistentFieldDetectionEnabled:(BOOL)a0;
- (void)requestPersistentFieldDetectionEnabled:(BOOL)a0 withReason:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_invalidateFieldDetectSession;
- (void)session:(id)a0 didEndTransaction:(id)a1;
- (void)fieldDetectSessionDidExitField:(id)a0;
- (void)_startFieldDetectSession;
- (id)initWithDelegate:(id)a0;
- (void)_startLookup;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)a0;
- (void)_endLookupAndNotify;
- (void)_restartFieldDetectSession;
- (void)_evaulatePersistentFieldDetectionEnablementReasons;

@end
