@class CDPUIDeviceToDeviceEncryptionFlowContext, NSString;

@interface CDPUIDeviceToDeviceEncryptionMessagingViewModel : NSObject <CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol>

@property (readonly) BOOL is2FA;
@property (readonly) BOOL hasLocalSecret;
@property (readonly) CDPUIDeviceToDeviceEncryptionFlowContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)message;
- (void).cxx_destruct;
- (id)title;
- (id)cancelTitle;
- (id)continueTitle;
- (id)initWithContext:(id)a0 is2FA:(BOOL)a1 hasLocalSecret:(BOOL)a2;

@end
