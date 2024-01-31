@class NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WPDState : NSObject

@property long long state;
@property BOOL restricted;
@property (weak) NSObject<OS_dispatch_queue> *cbQueue;
@property (weak) id /* block */ notification;
@property (retain) NSMutableSet *cbManagers;
@property (retain) NSMutableDictionary *cbStates;
@property BOOL initialUpdate;

+ (long long)getWPStateFromCBManagerState:(long long)a0;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithCompletion:(id /* block */)a0;
- (void)coalesceState:(long long *)a0 Restricted:(BOOL *)a1 UpdateCache:(BOOL)a2;
- (void)registerManager:(id)a0;
- (void)updateWithManager:(id)a0 Completion:(id /* block */)a1;

@end
