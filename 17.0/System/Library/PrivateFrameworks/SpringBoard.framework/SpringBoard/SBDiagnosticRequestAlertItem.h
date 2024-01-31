@class NSString, NSArray;

@interface SBDiagnosticRequestAlertItem : SBAlertItem

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *radarTitle;
@property (copy, nonatomic) NSString *radarDescription;
@property (copy, nonatomic) NSArray *radarAttachments;
@property (nonatomic) long long radarClassification;
@property (nonatomic) long long radarReproducibility;

- (void).cxx_destruct;
- (void)_fileRadar;
- (id)_yesButtonTitle;
- (id)_noButtonTitle;
- (id)_stringFromClassification:(long long)a0;
- (id)_stringFromReproducibility:(long long)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)performUnlockAction;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;

@end
