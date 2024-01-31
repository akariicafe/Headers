@class NSString, NSMutableOrderedSet;

@interface NCAssertion : NSObject <NCInvalidatable> {
    NSMutableOrderedSet *_invalidationBlocks;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *instantiationReason;
@property (readonly, copy, nonatomic) NSString *invalidationReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidateWithReason:(id)a0;
- (void).cxx_destruct;
- (void)addInvalidationBlock:(id /* block */)a0;
- (id)initWithInstantiationReason:(id)a0;

@end
