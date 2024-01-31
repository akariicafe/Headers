@class MADVideoRequest;

@interface MADServiceVideoTask : NSObject

@property (readonly, nonatomic) MADVideoRequest *request;

+ (id)taskForRequest:(id)a0;

- (id)finalize;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)configureVideoProcessor:(id)a0;

@end
