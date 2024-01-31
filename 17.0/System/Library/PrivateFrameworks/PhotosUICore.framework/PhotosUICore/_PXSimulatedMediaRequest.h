@protocol _RequestOptions;

@interface _PXSimulatedMediaRequest : NSObject {
    id /* block */ _originalProgressHandler;
    id /* block */ _simulatedResultHandler;
}

@property (readonly, nonatomic) id<_RequestOptions> simulatedOptions;

+ (id)defaultSimulatedMediaRequestWithOriginalOptions:(id)a0 simulatedResultHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (void)handleOriginalProgress:(double)a0 error:(id)a1 stop:(BOOL *)a2 info:(id)a3;
- (void)handleOriginalResult:(id)a0 info:(id)a1;
- (id)initWithOriginalOptions:(id)a0 simulatedResultHandler:(id /* block */)a1;
- (id)initWithWrappedMediaRequest:(id)a0;

@end
