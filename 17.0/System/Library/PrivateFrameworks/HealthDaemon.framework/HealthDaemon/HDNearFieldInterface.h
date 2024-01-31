@protocol HDNearFieldInterfaceDelegate;

@interface HDNearFieldInterface : NSObject

@property (weak, nonatomic) id<HDNearFieldInterfaceDelegate> delegate;

- (BOOL)setFieldDetectEnabled:(BOOL)a0;
- (void)startFieldDetectSessionWithCompletion:(id /* block */)a0;
- (BOOL)isNdefTagSessionInProgress;
- (void)endNdefTagSession;
- (void)endFieldDetectSession;
- (void).cxx_destruct;
- (id)startSinglePollExpressModeAssertion:(double)a0;
- (BOOL)isFieldDetectSessionInProgress;
- (id)releaseSinglePollExpressModeAssertion;
- (void)startNdefTagSessionWithBluetoothLESecureOOBData:(id)a0 completion:(id /* block */)a1;

@end
