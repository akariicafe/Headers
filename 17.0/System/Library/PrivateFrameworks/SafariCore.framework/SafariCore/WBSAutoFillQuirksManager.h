@class WBSRemotePlistController, WBSChangePasswordURLManager, WBSPasswordAuditingEligibleDomainsManager, WBSAutoFillAssociatedDomainsManager, NSString, WBSPasswordGenerationManager;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotePlistControllerDelegate> {
    WBSPasswordGenerationManager *_passwordGenerationManager;
    WBSAutoFillAssociatedDomainsManager *_associatedDomainsManager;
    WBSRemotePlistController *_remotePlistController;
    WBSPasswordAuditingEligibleDomainsManager *_passwordAuditingEligibleDomainsManager;
    WBSChangePasswordURLManager *_changePasswordURLManager;
}

@property (readonly, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;
@property (readonly, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, nonatomic) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (readonly, nonatomic) WBSChangePasswordURLManager *changePasswordURLManager;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)prepareForTermination;
- (void).cxx_destruct;
- (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
- (void)beginLoadingQuirksFromDisk;
- (id)initWithBuiltInQuirksURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (BOOL)isAutomaticLoginDisallowedOnURL:(id)a0;
- (BOOL)isStreamlinedLoginDisallowedOnURL:(id)a0;
- (void)didDownloadPlistForRemotePlistController:(id)a0;
- (id)_changePasswordURLStringsFromCurrentSnapshot;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_domainsToConsiderIdenticalFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (BOOL)_isURL:(id)a0 containedInQuirks:(id /* block */)a1;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (id)_urlFromRelyingParty:(id)a0;
- (BOOL)shouldUseFallbackUIForRelyingParty:(id)a0;

@end
