@class WBSPasswordAuditor, NSString, WBSPasswordBreachHelperProxy, NSArray, NSSet, WBSPasswordWarningTopFraudTargetsManager, WBSPasswordEvaluator, NSObject, WBSSavedAccountStore, NSUserDefaults, NSMapTable;
@protocol OS_dispatch_queue, WBSHistoricalHighLevelDomainsProvider;

@interface WBSPasswordWarningManager : NSObject <WBSRemotePlistControllerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _passwordEvaluatorLock;
    WBSPasswordEvaluator *_passwordEvaluator;
    WBSSavedAccountStore *_accountStore;
    NSUserDefaults *_userDefaults;
    WBSPasswordWarningTopFraudTargetsManager *_topFraudTargetsManager;
    WBSPasswordBreachHelperProxy *_passwordBreachHelperProxy;
    id<WBSHistoricalHighLevelDomainsProvider> _historyHighLevelDomainsProvider;
    NSSet *_historyHighLevelDomains;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedDataLock;
    BOOL _updateInProgress;
    NSArray *_cachedWarnings;
    NSMapTable *_cachedWarningsForSavedAccounts;
}

@property (readonly, nonatomic) WBSPasswordAuditor *passwordAuditor;
@property (readonly, nonatomic) WBSPasswordEvaluator *passwordEvaluator;
@property (readonly, nonatomic) long long numberOfNonHiddenWarningsWithSpecifiedPriority;
@property (readonly, nonatomic) BOOL hasUnacknowledgedHighPriorityWarnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)acknowledgeHighPriorityWarnings;
- (void)getAllWarningsForcingUpdate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)getWarningForSavedAccount:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithSavedAccountStore:(id)a0 autoFillQuirksManager:(id)a1 userDefaults:(id)a2 highLevelDomainsProvider:(id)a3;
- (void)removeWarningForSavedAccount:(id)a0;
- (BOOL)savedAccountsFromGroup:(id)a0 containsPasswordFromSavedAccount:(id)a1;
- (void)_getBreachResultRecordsForPasswords:(id)a0 startSessionIfNecessary:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (BOOL)_historyContainsItemForDomain:(id)a0;
- (unsigned long long)_issuesForPassword:(id)a0 withWeakPasswordEvaluation:(id)a1 breachResultRecord:(id)a2;
- (id)_passwordBreachHelperProxy;
- (long long)_scoreForSavedAccount:(id)a0 issueTypes:(unsigned long long)a1 topFraudTargets:(id)a2 contextKitCategories:(long long)a3;
- (void)_scoreWarnings:(id)a0 contextKitCategoryMap:(id)a1 topFraudTargets:(id)a2;
- (id)_scoredWarningForSavedAccount:(id)a0 topFraudTargets:(id)a1 contextKitCategories:(long long)a2 breachResultRecord:(id)a3;
- (void)_sortWarningsBySeverity:(id)a0 intoHighPriorityBucket:(id)a1 intoStandardPriorityBucket:(id)a2 unspecifiedSeverityBucket:(id)a3 savedAccountMap:(id)a4 highPriorityWarningHashes:(id)a5;
- (void)_updateUserDefaultsWithWarningHashes:(id)a0;
- (id)_warningForSavedAccount:(id)a0 breachResultRecord:(id)a1;
- (void)preWarmWarningsWithCompletionHandler:(id /* block */)a0;

@end
