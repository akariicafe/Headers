@class NSString, NSDictionary, NSData, NSNumber;

@interface MSDKManifestInstallableItem : MSDKManifestItem

@property (readonly, nonatomic) NSData *fileHash;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (readonly, nonatomic) BOOL isContainerized;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSNumber *appType;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *platformType;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSString *bundleShortVersionString;
@property (readonly, nonatomic) NSNumber *realSize;
@property (readonly, nonatomic) NSNumber *size;
@property (readonly, nonatomic) NSDictionary *privacyPermissions;
@property (readonly, nonatomic) NSString *bundleFilePath;

- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 andDictionary:(id)a1 forComponent:(id)a2;

@end
