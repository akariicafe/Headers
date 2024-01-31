@class IDSAccountController, NSMutableDictionary, NSArray, NSString;

@interface FTRegAppleIDSetupManager : NSObject

@property (retain, nonatomic) IDSAccountController *iMessageAccountController;
@property (retain, nonatomic) IDSAccountController *faceTimeAccountController;
@property (retain, nonatomic) NSMutableDictionary *setupOperations;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSArray *candidateAliases;
@property (copy, nonatomic) NSString *selectionSummaryText;
@property (readonly, nonatomic) BOOL shouldShowAliasSelectionUI;
@property (copy, nonatomic) NSArray *selectedAliases;

+ (id)sharedInstance;

- (void)_cleanup;
- (id)init;
- (void).cxx_destruct;
- (id)_appleID;
- (BOOL)aliasIsEnabled:(id)a0;
- (id)_aliasesForDictionary:(id)a0;
- (void)_notifyFailureWithError:(id)a0;
- (void)_notifySuccess;
- (void)_notifySuccess:(BOOL)a0 error:(id)a1;
- (BOOL)_shouldAttemptAccountRegistration;
- (BOOL)_shouldShowAliasSelectionUI;
- (void)_updateCandidateAliases;
- (void)_updateSelectionSummaryText;
- (id)accountControllerForService:(id)a0;
- (void)addSetupDictionary:(id)a0 forService:(long long)a1;
- (BOOL)beginSetupWithCompletionHandler:(id /* block */)a0;
- (id)phoneNumberDisplayString;
- (BOOL)shouldShowAliasSelectionUI;
- (BOOL)showsPhoneNumberDisplayString;

@end
