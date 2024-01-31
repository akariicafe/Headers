@interface NURenderPipelineFilter : NSObject

@property (readonly, nonatomic) id /* block */ filterBlock;

+ (id)stopAtTagFilter:(id)a0;

- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
