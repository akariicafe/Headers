@class NSString, MPCFirstFailureDetector, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MPCSamplesRecorderDelegate;

@interface MPCSamplesRecorder : NSObject {
    int _k;
    double _Q;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (readonly, weak, nonatomic) id<MPCSamplesRecorderDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, nonatomic) double min;
@property (readonly, nonatomic) double max;
@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double rms;
@property (readonly, nonatomic) int numberOfSamples;
@property (readonly, nonatomic) int glitches;
@property (readonly, nonatomic) int thermalLevel;
@property (readonly, nonatomic, getter=isStoringSamples) BOOL storingSamples;
@property (readonly, nonatomic) NSMutableArray *samples;
@property (readonly, nonatomic) MPCFirstFailureDetector *firstFailureDetector;

- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)flushSamplesToCSVDataWithHeader:(BOOL)a0;
- (id)initWithRecordID:(id)a0 modelID:(id)a1 firstFailureDetector:(id)a2 shouldStoreSamples:(BOOL)a3 delegate:(id)a4;
- (void)recordSample:(id)a0;

@end
