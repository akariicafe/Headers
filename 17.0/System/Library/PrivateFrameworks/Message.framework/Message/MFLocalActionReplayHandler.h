@class MFMailMessageLibrary, NSString, MailAccount, NSObject, NSMutableArray;
@protocol OS_os_log, EFScheduler;

@interface MFLocalActionReplayHandler : NSObject <EFLoggable, EFPubliclyDescribable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) MFMailMessageLibrary *library;
@property (weak, nonatomic) MailAccount *account;
@property (retain, nonatomic) NSMutableArray *actionsToReplay;
@property (readonly, nonatomic) id<EFScheduler> replayScheduler;
@property (nonatomic) BOOL needToCheckForNewActions;
@property BOOL replayingActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (void)connectionEstablished;
- (void)newActionsAdded;
- (void)_checkForNewActions;
- (void)_replayAllActions;
- (void).cxx_destruct;
- (void)addNewAction:(id)a0;
- (id)initWithLibrary:(id)a0 account:(id)a1;

@end
