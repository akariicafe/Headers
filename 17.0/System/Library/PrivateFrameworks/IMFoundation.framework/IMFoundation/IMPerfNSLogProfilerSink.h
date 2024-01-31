@class NSString;

@interface IMPerfNSLogProfilerSink : NSObject <IMPerfProfilerSink>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (void)perfProfiler:(id)a0 measurementDidFinish:(struct IMPerfMeasurement_t { struct IMFileLocation_t { char *x0; char *x1; char *x2; char *x3; int x4; } x0; unsigned long long x1; unsigned long long x2; struct __CFString *x3; double x4; double x5; double x6; } *)a1;

@end
