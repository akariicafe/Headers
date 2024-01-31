@class GeneralStatistics, NSString, NSArray, NSObject, NSMutableArray, MPSWorkloadInfoCapture;
@protocol OS_dispatch_semaphore;

@interface MPSCounterStatistics : NSObject {
    NSMutableArray *_rawData;
    unsigned long long _iterationsDone;
    struct counterData_t { unsigned long long x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; } *_metaDataContainer;
    struct counterStats_t { unsigned long long x0; double x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; unsigned long long x8; unsigned long long x9; double x10; } *_statsContainer;
    GeneralStatistics *_generalContainer;
    NSObject<OS_dispatch_semaphore> *_updateStatisticsSemaphore;
    unsigned long long _vendor;
    double _workloadEncodersCyclesTaken;
    double _workloadEncodersTimeTaken;
    double _workloadEncodersExtraTaken;
    unsigned long long _workloadEncodersCyclesMin;
    unsigned long long _workloadEncodersCyclesMax;
    unsigned long long _workloadEncodersTimestampMin;
    unsigned long long _workloadEncodersTimestampMax;
    unsigned long long _workloadEncodersExtraMin;
    unsigned long long _workloadEncodersExtraMax;
    BOOL _workloadEcoderRunningStatsValid;
    unsigned long long *_workloadFirstSample;
    unsigned long long *_previousEncoderStartSample;
    unsigned long long *_previousSample;
    BOOL _encoderCoalescing;
    BOOL _useInterposer;
    double _timeStampScaleFactor;
}

@property (readonly, nonatomic) MPSWorkloadInfoCapture *infoCapture;
@property (nonatomic) unsigned long long numberOfEncodersInCurrentWorkload;
@property (readonly, nonatomic) unsigned long long numEncodesPerCommandBufferForCurrentWorkload;
@property (readonly, nonatomic) NSString *extraCounterRequested;
@property (readonly, nonatomic, getter=getRawData) NSArray *rawData;
@property (readonly, nonatomic) NSArray *passList;
@property (readonly, nonatomic) unsigned long long commandBufferOffset;
@property (readonly, nonatomic) unsigned long long encoderOffset;
@property (readonly, nonatomic) unsigned long long commandOffset;
@property (readonly, nonatomic) unsigned long long timeOffset;
@property (readonly, nonatomic) unsigned long long cyclesOffset;
@property (readonly, nonatomic) unsigned long long extraOffset;
@property (readonly, retain, nonatomic) NSArray *cycleCounterStatistics;
@property (readonly, retain, nonatomic) NSArray *timingCounterStatistics;
@property (readonly, retain, nonatomic) NSArray *extraCounterStatistics;
@property (readonly, nonatomic) unsigned long long numberOfDispatches;

- (void)dealloc;
- (void)clearStatistics;
- (void)addMPSCounterData:(id)a0;
- (struct counterStats_t { unsigned long long x0; double x1; unsigned long long x2; double x3; double x4; double x5; double x6; double x7; unsigned long long x8; unsigned long long x9; double x10; } *)getCounterResults;
- (id)getGeneralStatistics;
- (BOOL)haveConvergedOn:(unsigned long long)a0;
- (id)initWithCounters:(id)a0 withExtraRequestedCounter:(id)a1 forWorkload:(id)a2 userSpecifiedIterations:(BOOL)a3 includingBlitSamples:(BOOL)a4;
- (id)initializeWithPassList:(id)a0 numberOfEncodersInCurrentWorkload:(unsigned long long)a1 numEncodesPerCommandBuffer:(unsigned long long)a2 extraRequestedCounter:(id)a3 userSpecifiedIterations:(BOOL)a4 vendor:(unsigned long long)a5 useGRC:(BOOL)a6;
- (void)printCounterResults;
- (void)updateStatsForScope:(unsigned long long)a0 withcurrentSample:(unsigned long long *)a1 startSample:(unsigned long long *)a2;

@end
