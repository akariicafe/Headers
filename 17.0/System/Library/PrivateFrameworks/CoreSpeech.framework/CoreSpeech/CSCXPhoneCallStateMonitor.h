@class CXCallObserver, TUCallProviderManager, NSString;

@interface CSCXPhoneCallStateMonitor : CSPhoneCallStateMonitor <CXCallObserverDelegate>

@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) TUCallProviderManager *tuCallProviderManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)firstPartyCall;
- (unsigned long long)phoneCallState;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;

@end
