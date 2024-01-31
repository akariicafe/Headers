@interface MRUCoordinatedUpdate : NSObject

@property (readonly, copy, nonatomic) id /* block */ update;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (void)complete;
- (void)process;
- (void).cxx_destruct;
- (id)initWithUpdate:(id /* block */)a0 completion:(id /* block */)a1;

@end
