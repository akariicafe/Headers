@class NSString, GCVersion;

@interface GCConfigurationAssetXPCProxy : NSObject <GCConfigurationAsset, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *assetId;
@property (readonly) NSString *assetState;
@property (readonly) GCVersion *compatibilityVersion;
@property (readonly) GCVersion *contentVersion;
@property (readonly) long long contentRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAsset:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
