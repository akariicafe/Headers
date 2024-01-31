@class NSString;

@interface HMIVideoAnalyzerDelegateAdapter : HMFObject <HMIVideoAnalyzerDelegate>

@property (copy) id /* block */ analyzerDidAnalyzeFrameWithResult;
@property (copy) id /* block */ analyzerDidAnalyzeFragmentWithResult;
@property (copy) id /* block */ analyzerDidFailWithError;
@property (copy) id /* block */ analyzerDidCreateTimelapseFragment;
@property (copy) id /* block */ analyzerDidProduceAnalysisStateUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)analyzer:(id)a0 didAnalyzeFragmentWithResult:(id)a1;
- (void)analyzer:(id)a0 didAnalyzeFrameWithResult:(id)a1;
- (void)analyzer:(id)a0 didCreateTimelapseFragment:(id)a1;
- (void)analyzer:(id)a0 didFailWithError:(id)a1;
- (void)analyzer:(id)a0 didProduceAnalysisStateUpdate:(id)a1;

@end
