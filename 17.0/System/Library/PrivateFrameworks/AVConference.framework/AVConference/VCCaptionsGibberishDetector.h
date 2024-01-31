@class NSMutableDictionary;

@interface VCCaptionsGibberishDetector : NSObject {
    double _gibberishThreshold;
    unsigned long long _windowLength;
    NSMutableDictionary *_gibberishStates;
    NSMutableDictionary *_history;
}

- (void)reset;
- (void)dealloc;
- (BOOL)gibberishStateForCaptionsToken:(long long)a0;
- (id)initWithGibberishThreshold:(double)a0 windowLength:(unsigned long long)a1;
- (BOOL)processTranscript:(id)a0;

@end
