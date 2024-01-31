@class AVAudioInputNode, NSDate, SNAudioStreamAnalyzer, NSString, AVAudioPlayerNode, AVAudioFile, NSMutableArray, AVAudioEngine, SNEstimateAudioOffsetRequest, AVAudioUnit, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface TVLListenEngine : NSObject <SNResultsObserving>

@property (retain, nonatomic) AVAudioEngine *audioEngine;
@property (retain, nonatomic) AVAudioInputNode *microphone;
@property (retain, nonatomic) AVAudioPlayerNode *player;
@property (retain, nonatomic) AVAudioUnit *mixer;
@property (retain, nonatomic) SNEstimateAudioOffsetRequest *estimateAudioOffsetRequest;
@property (retain, nonatomic) SNAudioStreamAnalyzer *streamAnalyzer;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AVAudioFile *file;
@property (retain, nonatomic) NSMutableArray *confidentResults;
@property (nonatomic) long long convergenceLossCount;
@property (retain, nonatomic) NSDate *firstObservationDate;
@property (nonatomic) double timeToConverge;
@property (nonatomic) BOOL lastObservationWasConfident;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue;
@property (nonatomic) BOOL didMissDeadline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)invalidate;
+ (void)engineWithCompletion:(id /* block */)a0;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (void)completeAnalysis;
- (void)_handleIterruption:(id)a0;
- (BOOL)_setupAndStartAudioEngineGraphWithTimeout:(double)a0 error:(id *)a1;
- (BOOL)_setupAndStartAudioSessionWithError:(id *)a0;
- (void)_splitMicrophoneAndReferenceToneChannels;
- (double)medianOfSortedArray:(id)a0;
- (BOOL)startListeningWithReferenceTone:(id)a0 at:(unsigned long long)a1 saveToFile:(id)a2 withCallback:(id /* block */)a3 completion:(id /* block */)a4;

@end
