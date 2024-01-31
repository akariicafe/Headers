@class SCMLPerformance, SCMLImageAnalyzer, NSDictionary, SCMLTextAnalyzer, NSObject;
@protocol OS_dispatch_queue;

@interface SCMLHandler : NSObject

@property (readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly) SCMLImageAnalyzer *imageAnalyzer;
@property (readonly) SCMLTextAnalyzer *textAnalyzer;
@property (readonly) NSDictionary *options;
@property (readonly, nonatomic) SCMLPerformance *perfResults;

+ (BOOL)supportsANE;
+ (id)currentModelVersion;
+ (BOOL)isImageSensitiveForLabel:(id)a0 confidenceScore:(double)a1 classificationMode:(unsigned long long)a2;
+ (BOOL)isImageSensitiveForLabel:(id)a0 confidenceScore:(double)a1 classificationMode:(unsigned long long)a2 modelVersion:(id)a3 error:(id *)a4;
+ (BOOL)supportsCPU;

- (void).cxx_destruct;
- (id)performanceStatistics;
- (id)initWithOptions:(id)a0 error:(id *)a1;
- (id)analyzePixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 stagedText:(id)a1 inConversationWithIdentifier:(id)a2 error:(id *)a3;
- (id)analyzeImage:(struct CGImage { } *)a0 error:(id *)a1;
- (long long)classifyImage:(struct CGImage { } *)a0 error:(id *)a1;
- (long long)classifyPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (id)classifyPixelBuffer:(struct __CVBuffer { } *)a0 startDate:(id)a1 endDate:(id)a2 stagedText:(id)a3 inConversationWithIdentifier:(id)a4 error:(id *)a5;
- (id)getOperatingPointDataForClassName:(id)a0 error:(id *)a1;
- (void)processConversationsWithStartDate:(id)a0 endDate:(id)a1 previousClassifications:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)processText:(id)a0 inConversationWithIdentifier:(id)a1 date:(id)a2 error:(id *)a3;

@end
