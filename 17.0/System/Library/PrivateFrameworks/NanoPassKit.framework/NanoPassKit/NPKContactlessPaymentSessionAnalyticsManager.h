@class NSString, NSObject, NPKContactlessPaymentSessionState;
@protocol OS_dispatch_queue;

@interface NPKContactlessPaymentSessionAnalyticsManager : NSObject <NPKContactlessPaymentSessionManagerObserver> {
    NSObject<OS_dispatch_queue> *_analyticsQueue;
}

@property (retain, nonatomic) NPKContactlessPaymentSessionState *previousState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)contactlessPaymentSessionManager:(id)a0 didChangeSessionState:(id)a1;

@end
