@class NSString, NSObject;

@interface CAMBufferKeyValueObserverObservance : CAMBufferObservance

@property (readonly, weak, nonatomic) NSObject *object;
@property (readonly, copy, nonatomic) NSString *keyPath;

- (void).cxx_destruct;
- (id)initWithKeyPath:(id)a0 ofObject:(id)a1 withPredicate:(id /* block */)a2 removedOnceEnabled:(BOOL)a3;
- (void)setupObservanceForBuffer:(id)a0;
- (BOOL)shouldBeFulfilledByChange:(id)a0;
- (void)teardownObservanceForBuffer:(id)a0;

@end
