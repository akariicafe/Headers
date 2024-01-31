@class ASDRepairOptions;

@interface ASDRepairApplicationRequest : NSObject {
    ASDRepairOptions *_options;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)sendRequestWithCompletionBlock:(id /* block */)a0;

@end
