@class UARPAssetTag;

@interface UARPTLVTypes : NSObject

@property (readonly, copy) UARPAssetTag *hsModel4cc;
@property (readonly) unsigned long long hsModelTlvModelType;
@property (readonly) unsigned long long hsModelDownloaded;
@property (readonly) unsigned long long hsModelPreInstalled;
@property (readonly) unsigned long long hsModelTlvModelLocale;
@property (readonly) unsigned long long hsModelTlvModelHash;
@property (readonly) unsigned long long hsModelTlvModelRole;
@property (readonly) unsigned long long hsModelPrimary;
@property (readonly) unsigned long long hsModelFallback;
@property (readonly) unsigned long long hsModelTlvModelDigest;
@property (readonly) unsigned long long hsModelTlvModelSignature;
@property (readonly) unsigned long long hsModelTlvModelCertificate;
@property (readonly) unsigned long long hsModelTlvModelEngineVersion;
@property (readonly) unsigned long long hsModelTlvModelEngineType;
@property (readonly) unsigned long long hsModelEngineCompact;
@property (readonly) unsigned long long hsModelEngineNormal;

+ (id)sharedInstance;

@end
