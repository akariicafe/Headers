@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, HKPPTInterface;

@interface HKPPT : NSObject <HKPPTController> {
    id<HKPPTInterface> _pptInterface;
    NSObject<OS_dispatch_queue> *_pptQueue;
    NSMutableDictionary *_activeTestsByName;
}

- (BOOL)runTest:(id)a0 options:(id)a1;
- (id)init;
- (void)startedTest:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)finishedTest:(id)a0 extraResults:(id)a1;
- (void)_failedTest:(id)a0;
- (void)_failedTest:(id)a0 withResults:(id)a1;
- (void)_finishedTest:(id)a0;
- (void)_finishedTest:(id)a0 extraResults:(id)a1;
- (void)_startedTest:(id)a0;
- (id)_testNameForDriver:(id)a0;
- (id)builtinTests;
- (void)failedTest:(id)a0 results:(id)a1 error:(id)a2;
- (id)initWithHKPPTInterface:(id)a0 usingQueue:(id)a1;
- (void)invalidConfigurationForTest:(id)a0 error:(id)a1;

@end
