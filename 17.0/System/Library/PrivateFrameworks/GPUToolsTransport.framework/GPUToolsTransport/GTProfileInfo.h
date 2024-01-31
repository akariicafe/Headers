@class NSArray, NSDictionary, NSString;

@interface GTProfileInfo : NSObject <NSSecureCoding> {
    unsigned int _version;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int gpuState;
@property (retain, nonatomic) NSArray *counters;
@property (retain, nonatomic) NSArray *profileCounters;
@property (retain, nonatomic) NSDictionary *derivedCounterData;
@property (retain, nonatomic) NSString *metalPluginName;
@property (retain, nonatomic) NSString *gpuTarget;
@property (retain, nonatomic) NSArray *encoderBatchPriorityList;
@property (retain, nonatomic) NSArray *highPriorityBatches;
@property (retain, nonatomic) NSDictionary *highPriorityBatchInfo;
@property (retain, nonatomic) NSArray *batchFilteredDerivedCounters;
@property (nonatomic) BOOL pause;
@property (nonatomic) BOOL resume;
@property (nonatomic) unsigned int xpState;
@property (nonatomic) BOOL analyzeBinaries;
@property (retain, nonatomic) NSDictionary *perEncoderDrawCallCount;
@property (retain, nonatomic) NSDictionary *perEncoderIndexDrawCallCount;
@property (retain, nonatomic) NSDictionary *withoutBlitEncoderToDrawCallCountDict;
@property (retain, nonatomic) NSArray *blitEncoderIndices;
@property (retain, nonatomic) NSArray *activePerEncoderDrawCallCount;
@property (retain, nonatomic) NSArray *splitEncoderCommandCount;
@property (retain, nonatomic) NSArray *splitPerEncoderKickCount;
@property (retain, nonatomic) NSArray *perFrameCommandBufferCount;
@property (retain, nonatomic) NSArray *perEncoderKickCount;
@property (nonatomic) unsigned int totalDrawCallCount;
@property (retain, nonatomic) NSArray *perCommandBufferEncoderCount;
@property (retain, nonatomic) NSDictionary *profilingConfig;
@property (retain, nonatomic) NSDictionary *counterConfig;
@property (retain, nonatomic) NSDictionary *timelineConfig;
@property (retain, nonatomic) NSDictionary *derivedCounterInfo;
@property (nonatomic) BOOL useOverlap;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initFromProfileInfo:(id)a0;

@end
