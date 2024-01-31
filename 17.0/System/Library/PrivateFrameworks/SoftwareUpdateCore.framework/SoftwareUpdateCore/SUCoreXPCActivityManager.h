@class SUCorePersistedState, NSString, SUCoreLog, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SUCoreXPCActivityManager : NSObject

@property (readonly, retain, nonatomic) NSString *managerName;
@property (retain, nonatomic) SUCoreLog *logger;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *persistedStateDispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue;
@property (retain, nonatomic) NSMutableArray *activities;
@property (retain, nonatomic) SUCorePersistedState *persistedState;

+ (id)sharedInstance;

- (id)description;
- (void).cxx_destruct;
- (void)eventHandler:(id)a0;
- (BOOL)isActivityTrackedButUnsheduled:(id)a0;
- (id)_getActivityForNameInternal:(id)a0;
- (BOOL)_isActivityTrackedButUnsheduledInternal:(id)a0;
- (BOOL)addActivityInfoToPersistedState:(id)a0;
- (id)copyOptionsForActivity:(id)a0;
- (id)getActivityForName:(id)a0;
- (id)getExpectedRunDateForActivity:(id)a0;
- (id)initWithNameAndPersistedStateFilePath:(id)a0 persistedStateFilePath:(id)a1;
- (BOOL)isActivityScheduled:(id)a0;
- (BOOL)isActivityScheduledInternal:(id)a0;
- (BOOL)removeActivityFromPersistedState:(id)a0;
- (int)scheduleActivity:(id)a0;
- (int)unscheduleActivity:(id)a0;

@end
