@class SAClient;
@protocol SAEmergencyResponseDelegate;

@interface SAEmergencyResponseManager : NSObject <SAEmergencyResponseClientProtocol>

@property (readonly, nonatomic) SAClient *client;
@property (weak, nonatomic) id<SAEmergencyResponseDelegate> delegate;

- (id)init;
- (void)dialVoiceCallToPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)updateVoiceCallStatus:(long long)a0;

@end
