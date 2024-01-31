@class DiagnosticPipelineRapidServiceFunctionsClientObjc;

@interface DRSRapidCloudKitHelper : NSObject

@property (readonly, nonatomic) DiagnosticPipelineRapidServiceFunctionsClientObjc *objcClient;

+ (id)devHelper;
+ (id)prodHelper;

- (void)submitRapidPayload:(id)a0 replyHandler:(id /* block */)a1;
- (id)_initWithEnvironment:(long long)a0;
- (void).cxx_destruct;

@end
