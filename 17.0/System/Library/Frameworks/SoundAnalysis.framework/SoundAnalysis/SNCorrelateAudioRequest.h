@class NSString, AVAudioFile;

@interface SNCorrelateAudioRequest : NSObject <SNAnalyzerCreating, SNRequest> {
    AVAudioFile *_referenceAudioFile;
}

@property double overlapFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createAnalyzerWithError:(id *)a0;
- (id)initWithAudioFile:(id)a0;

@end
