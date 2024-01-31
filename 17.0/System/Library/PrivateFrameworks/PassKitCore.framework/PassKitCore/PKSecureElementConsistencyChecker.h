@class PKPaymentWebService, NSObject;
@protocol OS_dispatch_queue, PKCloudStoreCoordinatorDelegate, PKSecureElementConsistencyCheckerDelegate;

@interface PKSecureElementConsistencyChecker : NSObject {
    NSObject<OS_dispatch_queue> *_processingQueue;
    id<PKCloudStoreCoordinatorDelegate> _cloudStoreCoordinatorDelegate;
}

@property (nonatomic) id<PKSecureElementConsistencyCheckerDelegate> delegate;
@property (retain, nonatomic) PKPaymentWebService *paymentWebService;

+ (BOOL)isCheckingConsistencyForSecureElementID:(id)a0;

- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)_downloadPassesWithCompletion:(id /* block */)a0;
- (void)_rescheduleCheckInTimeInterval:(double)a0 backoffLevel:(long long)a1;
- (void)_rescheduleWithBackoff;
- (void)_syncWithTSMCompletion:(id /* block */)a0;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1;
- (id)initWithPaymentWebService:(id)a0 delegate:(id)a1 cloudStoreCoordinatorDelegate:(id)a2;
- (void)queue_startWithCompletion:(id /* block */)a0;

@end
