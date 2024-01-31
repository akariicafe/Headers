@class NSMutableData, CSKeywordAnalyzerNDEAPIResult;
@protocol CSKeywordAnalyzerNDEAPIScoreDelegate;

@interface CSKeywordAnalyzerNDEAPI : NSObject {
    void **_ndeObject;
    NSMutableData *_currentBlob;
    CSKeywordAnalyzerNDEAPIResult *_lastResult;
}

@property (nonatomic) unsigned long long activeChannel;
@property (weak, nonatomic) id<CSKeywordAnalyzerNDEAPIScoreDelegate> delegate;

- (void)reset;
- (void)dealloc;
- (id)processAudioChunk:(id)a0;
- (void).cxx_destruct;
- (id)checkForTriggerWithBytes:(const short *)a0 withNumberOfSamples:(long long)a1;
- (id)getLastResult;
- (id)initWithBlob:(id)a0;
- (id)processAudioBytes:(void *)a0 withNumberOfSamples:(long long)a1;

@end
