@class TLAlert;

@interface TLAlertActivationAssertion : NSObject {
    TLAlert *_alert;
    _Atomic long long _activeAcquisitionCount;
}

- (void)dealloc;
- (void)acquire;
- (id)description;
- (void).cxx_destruct;
- (void)relinquish;
- (void)_acquire;
- (void)_relinquish;
- (id)initWithAlert:(id)a0;

@end
