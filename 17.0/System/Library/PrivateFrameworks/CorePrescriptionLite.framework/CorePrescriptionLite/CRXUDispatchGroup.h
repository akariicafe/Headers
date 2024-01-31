@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface CRXUDispatchGroup : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group;
@property (readonly, nonatomic) NSString *name;

- (void)wait;
- (void)leave;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)waitFor:(double)a0;
- (id)debugDescription;
- (void)enter;
- (void)notifyOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)onQueue:(id)a0 dispatchAsync:(id /* block */)a1;

@end
