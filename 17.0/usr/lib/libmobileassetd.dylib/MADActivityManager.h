@class NSObject, NSMutableDictionary, MADActivityTracker;
@protocol OS_dispatch_queue;

@interface MADActivityManager : NSObject

@property (readonly, nonatomic) MADActivityTracker *managerActivity;
@property (readonly, nonatomic) MADActivityTracker *unknownClient;
@property (readonly, nonatomic) MADActivityTracker *pidReusedClient;
@property (readonly, nonatomic) MADActivityTracker *untrackedCommandType;
@property (readonly, nonatomic) MADActivityTracker *untrackedCommand;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *activityTrackingQueue;
@property (readonly, nonatomic) NSMutableDictionary *xpcConnectionByProcessId;
@property (readonly, nonatomic) NSMutableDictionary *xpcConnectionByFullId;
@property (nonatomic) unsigned long long connectionNoClientTracker;
@property (nonatomic) unsigned long long connectionNoClientIdentifier;
@property (nonatomic) unsigned long long connectionReplyAllocationFailure;
@property (nonatomic) unsigned long long connectionNonDictionaryEvent;
@property (nonatomic) unsigned long long connectionMissingRequired;
@property (nonatomic) unsigned long long statusChangeNoClientTracker;
@property (nonatomic) unsigned long long statusChangeNoTrackerOwner;
@property (nonatomic) unsigned long long statusChangeNoControlManager;
@property (nonatomic) unsigned long long statusChangeNoDownloadManager;
@property (nonatomic) unsigned long long statusChangeUnknownOwner;
@property (nonatomic) unsigned long long statusChangeUnknownXPCError;
@property (nonatomic) unsigned long long statusChangeUnknownXPCType;

+ (id)sharedActivityManager;
+ (id)clientForConnection:(id)a0;
+ (void)connectionInterruptedForClient:(id)a0;
+ (void)connectionInvalidForClient:(id)a0;
+ (void)failureOfActivity:(id)a0 withResult:(int)a1 ofResultName:(id)a2 forReason:(id)a3;
+ (id)newTrackingCommandForEvent:(id)a0 forClient:(id)a1;
+ (void)noticeForActivity:(id)a0 reason:(id)a1;
+ (BOOL)notifyStatusChange:(unsigned long long)a0 forClient:(id)a1 withReason:(id)a2;
+ (void)progressForActivity:(id)a0 calledPrimitive:(id)a1 withBoolResult:(BOOL)a2;
+ (void)progressForActivity:(id)a0 calledPrimitive:(id)a1 withErrorResult:(id)a2;
+ (void)progressForActivity:(id)a0 calledPrimitive:(id)a1 withSuccessResult:(BOOL)a2;
+ (void)progressForActivity:(id)a0 callingPrimitive:(id)a1;
+ (id)remoteProcessFullIdentifierForConnection:(id)a0;
+ (id)remoteProcessIdentifierForConnection:(id)a0;
+ (void)sendReply:(id)a0 withCancelDownloadResult:(long long)a1;
+ (void)sendReply:(id)a0 withDownloadResult:(long long)a1;
+ (void)sendReply:(id)a0 withOperationResult:(long long)a1;
+ (void)sendReply:(id)a0 withResult:(int)a1 ofResultName:(id)a2;
+ (void)terminationIminentForClient:(id)a0;
+ (void)transferOwnership:(id)a0 toOwner:(unsigned long long)a1 reason:(id)a2;
+ (void)unknownXPCError:(id)a0 forClient:(id)a1;
+ (void)unknownXPCType:(struct _xpc_type_s { } *)a0 forClient:(id)a1;
+ (void)warningForActivity:(id)a0 fromMethod:(id)a1 leaderNote:(id)a2 warning:(id)a3;

- (id)init;
- (id)_clientForConnection:(id)a0;
- (void).cxx_destruct;
- (id)_clientMADActivityTrackerForClient:(id)a0 withProcessID:(id)a1 withFullID:(id)a2;
- (void)_finishClientCommandActivity:(id)a0 withResult:(int)a1 ofResultName:(id)a2 ableToReply:(BOOL)a3;
- (void)_startClientCommandActivity:(id)a0;

@end
