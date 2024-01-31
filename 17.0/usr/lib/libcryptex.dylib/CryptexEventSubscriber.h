@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CryptexEventSubscriber : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *subscribers;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *streamQueue;

@property (readonly, nonatomic) NSString *xpcEventName;
@property (nonatomic) BOOL active;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ callback;

+ (void)attachToStream:(id)a0 withRegistration:(id)a1;
+ (void)detachFromStream:(id)a0;
+ (void)initializeEventStream;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_handleXPCEvent:(id)a0;
- (void)cancel;
- (void)handleXPCEvent:(id)a0;
- (id)initWithFlags:(unsigned long long)a0 name:(id)a1;
- (id)registerForEvents:(unsigned long long)a0 onQueue:(id)a1 withCompletion:(id /* block */)a2;

@end
