@class NSArray, NSDictionary, NSMutableDictionary, NSMutableData, NSNumber;

@interface DYMTLShaderProfilerResult : DYShaderProfilerResult

@property (retain, nonatomic) NSArray *encoderTilerParamBufBytesUsedArray;
@property (retain, nonatomic) NSNumber *parameterBufferMaxSize;
@property (retain, nonatomic) NSNumber *parameterBufferMaxSizeEverMemless;
@property (retain, nonatomic) NSNumber *parameterBufferMaxSizeNeverMemless;
@property (retain, nonatomic) NSDictionary *parameterBufferPercentFullDict;
@property (retain, nonatomic) NSDictionary *softwareCounterInfo;
@property (retain, nonatomic) NSMutableData *unknownUSCSamples;
@property (retain, nonatomic) NSMutableDictionary *perRingPerFrameLimiterData;

- (id)init;
- (void).cxx_destruct;

@end
