@class VCPHomeKitAnalysisService;

@interface HMITaskServiceClient : HMITaskService

@property (readonly) VCPHomeKitAnalysisService *remote;

+ (id)logCategory;

- (BOOL)cancelTask:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (int)submitTaskWithOptions:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
