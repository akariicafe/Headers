@class NSError;
@protocol MTLFunction;

@interface CompilationResult : NSObject {
    void *_barrier;
    id<MTLFunction> _function;
    NSError *_error;
}

@property (readonly, retain, nonatomic) id<MTLFunction> function;
@property (readonly, retain, nonatomic) NSError *error;

- (id)init;
- (void)dealloc;
- (id /* block */)completionHandler;
- (id)initWithFunction:(id)a0 error:(id)a1;

@end
