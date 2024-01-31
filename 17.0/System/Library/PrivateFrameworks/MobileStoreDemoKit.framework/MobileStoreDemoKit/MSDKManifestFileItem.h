@class NSString, NSData, NSDictionary;

@interface MSDKManifestFileItem : MSDKManifestItem

@property (readonly, nonatomic) NSString *fileType;
@property (readonly, nonatomic) NSData *fileHash;
@property (readonly, nonatomic) NSDictionary *fileAttributes;
@property (readonly, nonatomic) NSDictionary *fileExtendedAttributes;
@property (readonly, nonatomic) NSString *symbolicLinkTargetFilePath;
@property (readonly, nonatomic) NSString *manifestFilePath;
@property (readonly, nonatomic) NSString *bundleFilePath;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andDictionary:(id)a1 forComponent:(id)a2;

@end
