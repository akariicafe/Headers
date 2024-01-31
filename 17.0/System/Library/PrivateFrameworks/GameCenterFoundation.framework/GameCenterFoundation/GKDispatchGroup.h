@class GKThreadsafeDictionary, NSString, NSError, NSObject, GKActivity;
@protocol OS_dispatch_group;

@interface GKDispatchGroup : NSObject {
    NSString *_name;
    NSObject<OS_dispatch_group> *_group;
    GKThreadsafeDictionary *_values;
    id result;
    int _sequence;
}

@property (retain) GKActivity *activity;
@property (retain) NSError *error;
@property (retain) id result;
@property (nonatomic, getter=isLoggingEnabled) BOOL loggingEnabled;

+ (id)dispatchGroup;
+ (id)backgroundConcurrentQueue;
+ (id)mainQueue;
+ (id)dispatchGroupWithName:(id)a0;
+ (void)waitUntilDone:(id /* block */)a0;
+ (id)defaultConcurrentQueue;

- (void)wait;
- (id)allValues;
- (void)perform:(id /* block */)a0;
- (id)init;
- (long long)waitWithTimeout:(double)a0;
- (void)dealloc;
- (void)notifyOnMainQueueWithBlock:(id /* block */)a0;
- (id)_values;
- (void)leave;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithName:(id)a0;
- (id)description;
- (void)notifyOnQueue:(id)a0 block:(id /* block */)a1;
- (long long)_waitWithDispatchTimeout:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)join:(id)a0 queue:(id)a1 block:(id /* block */)a2;
- (void)enter;

@end
