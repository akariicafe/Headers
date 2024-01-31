@class NSString;
@protocol CNAvatarPickerServiceHostProtocol;

@interface CNAvatarPickerServiceHostContext : NSExtensionContext <CNAvatarPickerServiceHostProtocol>

@property (weak, nonatomic) id<CNAvatarPickerServiceHostProtocol> exportedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (id)remoteProxy;
- (void).cxx_destruct;
- (void)avatarPickerExtensionDidSelectItemWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidCancel;
- (void)avatarPickerExtensionDidCreateAvatarWithRecordData:(id)a0 identifier:(id)a1;
- (void)avatarPickerExtensionDidDeleteAvatarWithIdentifier:(id)a0;
- (void)avatarPickerExtensionDidFinishWithImageData:(id)a0 memojiMetadata:(id)a1;
- (void)avatarPickerExtensionDidRequestMemojiEditorPresentationForRecordIdentifier:(id)a0;

@end
