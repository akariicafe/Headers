@class NSString, CKEntitlements;

@interface CKDApplicationMetadata : NSObject

@property (nonatomic) long long adopterProcessType;
@property (copy, nonatomic) NSString *containingBundleID;
@property (copy, nonatomic) NSString *applicationContainerPath;
@property (retain, nonatomic) CKEntitlements *entitlements;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic) BOOL isClientMainBundleAppleExecutable;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAdopterProcessType:(long long)a0 containingBundleID:(id)a1 applicationContainerPath:(id)a2 entitlements:(id)a3 clientSDKVersion:(unsigned int)a4 isClientMainBundleAppleExecutable:(BOOL)a5;

@end
