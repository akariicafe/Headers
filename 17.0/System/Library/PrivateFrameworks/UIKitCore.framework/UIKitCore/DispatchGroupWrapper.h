@class NSObject;
@protocol OS_dispatch_group;

@interface DispatchGroupWrapper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;

- (id)init;
- (void).cxx_destruct;
- (void)notify:(id /* block */)a0;
- (void)executeWithDispatchGroup:(id /* block */)a0;

@end
