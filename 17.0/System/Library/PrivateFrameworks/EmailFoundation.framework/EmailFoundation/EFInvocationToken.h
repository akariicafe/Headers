@class NSString, NSLock, NSMutableArray;

@interface EFInvocationToken : NSObject <EFInvocable> {
    NSLock *_lock;
    NSMutableArray *_blocks;
    BOOL _isInvoked;
}

@property (readonly, getter=isInvoked) BOOL invoked;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_descriptionString;
+ (id)tokenWithInvocationBlock:(id /* block */)a0;
+ (id)tokenWithLabel:(id)a0 invocationBlock:(id /* block */)a1;

- (id)init;
- (void)invoke;
- (id)initWithInvocationBlock:(id /* block */)a0;
- (id)initWithLabel:(id)a0;
- (void)addInvocationBlock:(id /* block */)a0;
- (id)_nts_consumeBlocks;
- (void)removeAllInvocationBlocks;
- (void).cxx_destruct;
- (void)addInvocable:(id)a0;

@end
