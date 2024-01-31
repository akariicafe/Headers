@class NSString;
@protocol NSLocking;

@interface HAP2Lock : HAP2LoggingObject {
    _Atomic unsigned long long _lockCount;
}

@property (readonly, nonatomic) id<NSLocking> internalLock;
@property (readonly, nonatomic) NSString *name;

+ (id)lockWithName:(id)a0;
+ (id)new;

- (id)init;
- (void)assertOwner;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (void)_performBlock:(id /* block */)a0 allowRecursive:(BOOL)a1;
- (id)initWithLock:(id)a0 name:(id)a1;

@end
