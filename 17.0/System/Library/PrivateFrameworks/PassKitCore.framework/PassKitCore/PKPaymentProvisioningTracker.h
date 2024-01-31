@class NSString, PKPaymentProvisioningController;

@interface PKPaymentProvisioningTracker : NSObject <PKCancelable> {
    PKPaymentProvisioningController *_controller;
}

@property (readonly, nonatomic, getter=isCanceled) BOOL canceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
