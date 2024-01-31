@class _PASSimpleCoalescingTimer, CLLocationManager, NSObject;
@protocol OS_dispatch_queue;

@interface ATXMicrolocationLocalization : NSObject {
    _PASSimpleCoalescingTimer *_coalescingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    CLLocationManager *_locationManager;
}

- (id)initWithLocationManager:(id)a0;
- (void).cxx_destruct;
- (void)_triggerMicroLocationLocalization;
- (void)initiateLocalization;

@end
