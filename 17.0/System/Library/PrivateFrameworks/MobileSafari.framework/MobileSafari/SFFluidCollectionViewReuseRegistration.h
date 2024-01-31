@class NSMutableSet;

@interface SFFluidCollectionViewReuseRegistration : NSObject

@property (readonly, copy, nonatomic) id /* block */ viewCreationBlock;
@property (readonly, nonatomic) NSMutableSet *queue;

- (void).cxx_destruct;
- (id)initWithViewCreationBlock:(id /* block */)a0;

@end
