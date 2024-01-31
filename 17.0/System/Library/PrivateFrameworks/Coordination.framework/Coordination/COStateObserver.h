@class NSPredicate, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface COStateObserver : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, retain, nonatomic) NSPredicate *predicate;
@property (readonly, copy, nonatomic) NSMutableDictionary *lastChanges;

- (id)description;
- (void).cxx_destruct;
- (void)notify:(id)a0;
- (id)initWithDispatchQueue:(id)a0 predicate:(id)a1 block:(id /* block */)a2;

@end
