@class EMBlockedSenderManager, NSString, EDMailboxProvider, NSObject;
@protocol OS_os_log, EMUserProfileProvider, EMVIPReader;

@interface EDMessageTransformer : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDMailboxProvider *mailboxProvider;
@property (readonly, nonatomic) id<EMUserProfileProvider> userProfileProvider;
@property (readonly, nonatomic) EMBlockedSenderManager *blockedSenderManager;
@property (readonly, nonatomic) id<EMVIPReader> vipReader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mailboxesForPersistedMessage:(id)a0 mailboxProvider:(id)a1;

- (void).cxx_destruct;
- (id)transformBaseMessage:(id)a0 mailboxScope:(id)a1 loaderBlock:(id /* block */)a2;
- (id)_transformBaseMessage:(id)a0 mailboxScope:(id)a1 duplicateInfo:(id)a2 loaderBlock:(id /* block */)a3;
- (id)initWithMailboxProvider:(id)a0 userProfileProvider:(id)a1 blockedSenderManager:(id)a2 vipReader:(id)a3;
- (id)transformPersistedMessages:(id)a0 mailboxScope:(id)a1;

@end
