@class NSData, RBSProcessIdentity, NSString, NSUUID, NSSet, PRUpdatingService, NSOperationQueue, LSPropertyList, _EXHostConfiguration, PRSPosterExtension, _EXExtensionIdentity, NSBundle;

@interface PRPosterExtension : NSObject <PRPosterExtensionDescribing> {
    PRSPosterExtension *_extension;
    PRUpdatingService *_lock_assetUpdater;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSOperationQueue *_refreshConfigurationQueue;
    NSOperationQueue *_reloadDescriptorsQueue;
}

@property (readonly, nonatomic) PRSPosterExtension *prs_extension;
@property (readonly, nonatomic) NSSet *pr_supportedRoles;
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

- (void)dealloc;
- (void)clearUpdatingServiceForReason:(id)a0;
- (id)pr_assetUpdaterWithError:(id *)a0;
- (void)invalidate;
- (id)initWithPRSPosterExtension:(id)a0;
- (void)pr_addRefreshConfigurationOperation:(id)a0 waitUntilFinished:(BOOL)a1;
- (id)pr_reloadDescriptorOperations;
- (void).cxx_destruct;
- (id)pr_refreshConfigurationOperations;
- (BOOL)isEqual:(id)a0;
- (void)pr_addReloadDescriptorOperation:(id)a0;

@end
