@class NSString;
@protocol INUIVoiceShortcutRemoteHostingInterface;

@interface INUIVoiceShortcutHostContext : NSExtensionContext <INUIVoiceShortcutRemoteHostingInterface>

@property (weak, nonatomic) id<INUIVoiceShortcutRemoteHostingInterface> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)a0 error:(id)a1;
- (void)remoteViewControllerDidDeleteVoiceShortcutWithIdentifier:(id)a0;
- (void)remoteViewControllerDidUpdateVoiceShortcut:(id)a0 error:(id)a1;

@end
