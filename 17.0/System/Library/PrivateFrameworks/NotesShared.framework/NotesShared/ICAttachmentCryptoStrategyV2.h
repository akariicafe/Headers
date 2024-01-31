@class NSString;

@interface ICAttachmentCryptoStrategyV2 : ICCloudSyncingObjectCryptoStrategyV2 <ICAttachmentCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptedFallbackAssetDataForFallbackAssetType:(long long)a0;
- (id)decryptedFallbackImageData;
- (id)decryptedFallbackPDFData;
- (BOOL)writeEncryptedFallbackAssetData:(id)a0 fallbackAssetType:(long long)a1;
- (BOOL)writeEncryptedFallbackImageData:(id)a0;
- (BOOL)writeEncryptedFallbackPDFData:(id)a0;

@end
