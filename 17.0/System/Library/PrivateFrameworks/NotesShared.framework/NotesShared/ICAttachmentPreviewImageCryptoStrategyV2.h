@class NSString;

@interface ICAttachmentPreviewImageCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICAttachmentPreviewImageCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptedImageData;
- (id)_decryptedImageData;
- (id)decryptedMetadata;
- (void)serializeToEncryptedMetadata:(id)a0;
- (BOOL)writeEncryptedImageFromData:(id)a0;
- (void)writeEncryptedMetadata:(id)a0;

@end
