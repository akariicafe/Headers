@class NSString;

@interface NSFileCoordinatorAccessorBlockCompletion : NSObject <NSFileCoordinationRetainedAccess> {
    id /* block */ block;
    _Atomic int count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)completionWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void)decrement;
- (void)increment;

@end
