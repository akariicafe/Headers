@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MISystemAppState : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *appStateQueue;
@property (retain, nonatomic) NSMutableDictionary *systemAppStateList;

+ (id)sharedList;
+ (id)_systemAppStateFromURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeIdentifiers:(id)a0;
- (void)_onQueue_setSystemAppStateList:(id)a0;
- (id)_onQueue_retrieveSystemAppStateRestoringBackedUpState:(BOOL)a0;
- (id)_onQueue_systemAppStateList;
- (void)addIdentifier:(id)a0 withState:(int)a1;
- (id)systemAppStateDictionaryRestoringBackedUpState:(BOOL)a0;

@end
