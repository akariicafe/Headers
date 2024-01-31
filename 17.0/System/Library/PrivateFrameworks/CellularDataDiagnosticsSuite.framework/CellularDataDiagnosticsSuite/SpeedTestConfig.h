@class NPTPerformanceTest;

@interface SpeedTestConfig : NSObject {
    BOOL inProgress;
    NPTPerformanceTest *performanceTest;
}

- (void)abort;
- (id)init;
- (void)dealloc;
- (BOOL)inProgress;
- (void).cxx_destruct;
- (void)startDownloadTest:(id /* block */)a0;

@end
