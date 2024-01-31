@class NSString, PKSharingMessageExtensionCommonMessage;
@protocol PKSharingMessageExtensionRenderer, PKPaymentWebServiceTargetDeviceProtocol, PKSharingMessageExtensionMessage, PKPassLibraryDataProvider;

@interface PKSharingMessageExtensionFallbackPresenter : NSObject <PKSharingMessageExtensionPresenter> {
    id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
    id<PKPassLibraryDataProvider> _passLibrary;
    PKSharingMessageExtensionCommonMessage *_message;
}

@property (weak, nonatomic) id<PKSharingMessageExtensionRenderer> renderer;
@property (retain, nonatomic) id<PKSharingMessageExtensionMessage> message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)messageClass;
+ (id)propertiesForMessage:(id)a0;

- (void).cxx_destruct;
- (void)didTapMessage;
- (void)extensionWillAppear;
- (id)initWithTargetDevice:(id)a0 passLibrary:(id)a1;
- (void)validateForRecipients:(id)a0 senderAddress:(id)a1 completion:(id /* block */)a2;

@end
