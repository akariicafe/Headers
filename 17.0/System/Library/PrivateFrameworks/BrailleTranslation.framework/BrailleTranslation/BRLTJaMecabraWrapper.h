@class NSString, NSMutableDictionary;

@interface BRLTJaMecabraWrapper : NSObject {
    NSString *_string;
    struct __Mecabra { } *_mecabra;
    struct __MecabraContext { } *_context;
    NSMutableDictionary *_candidateRefForSurface;
    NSString *_currentAnalysis;
    NSString *_currentSurface;
    BOOL _reachedEnd;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)learnCandidate:(id)a0;
- (void)analyzeString:(id)a0;
- (id)getCurrentCandidateAnalysisString;
- (id)getCurrentCandidateSurface;
- (BOOL)moveToNextCandidate;

@end
