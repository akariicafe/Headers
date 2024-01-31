@class CDPDFollowUpFactory, NSString, FLFollowUpController;

@interface CDPDFollowUpController : NSObject <CDPDAuthListener>

@property (retain, nonatomic) FLFollowUpController *followUpController;
@property (retain, nonatomic) CDPDFollowUpFactory *followUpFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_identifiersAllowedForTelemetry;

- (id)_hasSOSActiveDeviceForAltDSID:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_isNotAudioAccessory;
- (id)_sosCompatibilityModeContext:(id)a0;
- (id)_cdpRepairContext:(id)a0;
- (void).cxx_destruct;
- (id)_followUpControllerForContext:(id)a0;
- (id)_makeAAFLFollowUpController;
- (BOOL)_clearFollowUpForContext:(id)a0 error:(id *)a1;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (id)informativeText;
- (id)_rkMismatchHealingContext:(id)a0;
- (BOOL)_postFollowUpItem:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)postFollowUpItemForContext:(id)a0 error:(id *)a1;
- (void)securityLevelChangedForAccountContext:(id)a0;

@end
