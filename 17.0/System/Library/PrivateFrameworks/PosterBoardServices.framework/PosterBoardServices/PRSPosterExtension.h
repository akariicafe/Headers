@class NSData, NSString, RBSProcessIdentity, NSUUID, LSApplicationExtensionRecord, NSBundle, _EXHostConfiguration, _EXExtensionIdentity, LSPropertyList;

@interface PRSPosterExtension : NSObject <PRSPosterExtensionDescribing> {
    NSUUID *_instanceIdentifier;
    NSUUID *_uuid;
    LSApplicationExtensionRecord *_record;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _EXExtensionIdentity *prs_identity;
@property (readonly, nonatomic) _EXHostConfiguration *prs_hostConfiguration;
@property (readonly, nonatomic) RBSProcessIdentity *prs_processIdentity;
@property (readonly, nonatomic) NSString *prs_posterExtensionBundleIdentifier;
@property (readonly, nonatomic) NSString *prs_localizedName;
@property (readonly, nonatomic) NSString *prs_posterExtensionContainerBundleIdentifier;
@property (readonly, nonatomic) LSPropertyList *prs_posterExtensionInfoPlist;
@property (readonly, nonatomic) LSPropertyList *prs_posterExtensionEntitlementsPlist;
@property (readonly, nonatomic) NSData *prs_persistentIdentifier;
@property (readonly, nonatomic) NSBundle *prs_posterExtensionBundle;
@property (readonly, nonatomic) NSUUID *prs_instanceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionWithIdentity:(id)a0;
+ (id)extensionWithIdentity:(id)a0 instanceIdentifier:(id)a1;
+ (id)extensionWithHostConfiguration:(id)a0 instanceIdentifier:(id)a1;

- (id)applicationExtensionRecord;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithHostConfiguration:(id)a0 instanceIdentifier:(id)a1;
- (id)pr_hostConfiguration;
- (id)pr_identity;

@end
