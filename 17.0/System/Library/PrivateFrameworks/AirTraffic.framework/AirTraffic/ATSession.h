@class NSError, NSString, NSXPCListenerEndpoint, NSHashTable, NSXPCConnection, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject;
@protocol ATMessageLink, OS_dispatch_queue, OS_dispatch_group;

@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding> {
    NSMutableArray *_sessionTasks;
    NSMutableDictionary *_sessionTasksByIdentifier;
    NSMutableSet *_observing;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_group;
    NSXPCConnection *_connection;
    double _startTime;
    double _finishTime;
    BOOL _suspended;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic, getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSString *sessionTypeIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSString *dataClass;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSError *error;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (weak, nonatomic) id<ATMessageLink> messageLink;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_cancelSessionWithIdentifier:(id)a0;
+ (void)initialize;
+ (unsigned long long)_remoteActiveSessionCountWithTypeIdentifier:(id)a0;
+ (unsigned long long)activeSessionCountWithSessionTypeIdentifier:(id)a0;
+ (void)setSessionHost:(BOOL)a0;
+ (id)allSessions;
+ (id)sessionsWithSessionTypeIdentifier:(id)a0 dataClass:(id)a1;
+ (id)_remoteSessionsWithTypeIdentifier:(id)a0;
+ (id)sessionsWithSessionTypeIdentifier:(id)a0;

- (id)sessionTasks;
- (id)init;
- (void)removeObserver:(id)a0;
- (void)start;
- (void)encodeWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)cancel;
- (void)_performSelectorOnObservers:(SEL)a0 object:(id)a1 object:(id)a2;
- (void)addObserver:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_finishWithError:(id)a0;
- (id)_keysToObserve;
- (void)addSessionTasks:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 sessionTypeIdentifier:(id)a1;
- (id)initWithSessionTypeIdentifier:(id)a0;
- (id)sessionTasksWithGroupingKey:(id)a0;
- (void)beginSessionTask:(id)a0;
- (void)updateSessionTask:(id)a0;
- (void)_beginTasks:(id)a0;
- (void)_observeKeysForTask:(id)a0;
- (void)_performSelectorOnObservers:(SEL)a0 object:(id)a1;
- (void)_stopObservingKeysForTask:(id)a0;
- (void)waitToFinish;

@end
