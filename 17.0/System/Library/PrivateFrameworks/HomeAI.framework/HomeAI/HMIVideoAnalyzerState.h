@class HMIVideoAnalyzerConfiguration, NSUUID, NSArray, NSDictionary, NSString, HMIVideoAnalyzerDynamicConfiguration;

@interface HMIVideoAnalyzerState : HMFObject <HMFLogging>

@property (readonly) HMIVideoAnalyzerConfiguration *configuration;
@property (readonly) HMIVideoAnalyzerDynamicConfiguration *dynamicConfiguration;
@property (readonly) NSUUID *identifier;
@property (readonly) BOOL monitored;
@property (readonly) double analysisFPS;
@property (readonly) double timeSinceAnalyzerStarted;
@property (readonly) double timeSinceLastFragmentWasReceived;
@property (readonly) double bufferFillRatio;
@property (readonly) unsigned long long bufferSize;
@property (readonly) double delay;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } currentPTS;
@property (readonly) unsigned long long numDecodedSamples;
@property (readonly) unsigned long long numDidAnalyzeFrames;
@property (readonly) unsigned long long numDidAnalyzeFragments;
@property (readonly) unsigned long long numDidAnalyzePackages;
@property (readonly) unsigned long long numDidCreateTimelapseFragments;
@property (readonly) double averageAnalysisTime;
@property (readonly) BOOL encode;
@property (readonly) BOOL encoder;
@property (readonly) NSArray *tableColumns;
@property (readonly) NSArray *tableValues;
@property (readonly) NSDictionary *JSONObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)check;
- (id)initWithConfiguration:(id)a0 dynamicConfiguration:(id)a1 identifier:(id)a2 monitored:(BOOL)a3 analysisFPS:(double)a4 timeSinceAnalyzerStarted:(double)a5 timeSinceLastFragmentWasReceived:(double)a6 bufferFillRatio:(double)a7 bufferSize:(unsigned long long)a8 delay:(double)a9 currentPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a10 numDecodedSamples:(unsigned long long)a11 numDidAnalyzeFrames:(unsigned long long)a12 numDidAnalyzeFragments:(unsigned long long)a13 numDidAnalyzePackages:(unsigned long long)a14 numDidCreateTimelapseFragments:(unsigned long long)a15 averageAnalysisTime:(double)a16 encode:(BOOL)a17 encoder:(BOOL)a18;

@end
