@class NSString;

@interface ICAttachmentCryptoStrategyV1Neo : ICCloudSyncingObjectCryptoStrategyV1Neo <ICAttachmentCryptoStrategy>

@property (readonly, nonatomic) long long intrinsicNotesVersion;
@property (readonly, nonatomic) BOOL canAuthenticate;
@property (readonly, nonatomic) BOOL isAuthenticated;
@property (readonly, nonatomic) BOOL hasPassphraseSet;
@property (readonly, copy, nonatomic) NSString *passphraseHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)decryptedFallbackImageData;
- (id)decryptedFallbackPDFData;
- (BOOL)rewrapWithMainKey:(id)a0;
- (BOOL)writeEncryptedFallbackImageData:(id)a0;
- (BOOL)writeEncryptedFallbackPDFData:(id)a0;

@end
