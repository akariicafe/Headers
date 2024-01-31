@class NSMutableDictionary;

@interface VCAlgosStreamingScoreAggregator : NSObject {
    NSMutableDictionary *_participantAlgosScorers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _blockAlgosScorersDictionaryLock;
}

@property (readonly, nonatomic) double score;

- (id)init;
- (void)dealloc;
- (double)aggregateScores;
- (void)addParticipantWithTime:(double)a0 participantID:(id)a1;
- (double)aggregateScoresWithDictionaryLogging:(BOOL)a0 time:(double)a1;
- (id)algosScorerWithParticipantID:(id)a0;

@end
