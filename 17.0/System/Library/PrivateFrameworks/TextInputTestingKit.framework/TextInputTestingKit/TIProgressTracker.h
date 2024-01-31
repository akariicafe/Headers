@class NSCountedSet, NSString, NSDate, NSMutableArray;

@interface TIProgressTracker : NSObject

@property (nonatomic) long long repeatLimit;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *intended;
@property (copy, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSCountedSet *priorStates;
@property (retain, nonatomic) NSMutableArray *stateTranscript;
@property (copy, nonatomic) NSString *badSentenceFilePath;
@property (copy, nonatomic) NSString *badSentenceTranscriptFilePath;
@property (readonly, nonatomic) BOOL limitsReached;

- (void).cxx_destruct;
- (void)appendStringToFile:(id)a0 atFilePath:(id)a1;
- (id)initWithIntendedString:(id)a0 repeatLimit:(long long)a1 timeout:(double)a2 badSentencePath:(id)a3;
- (void)saveBadSentenceAndTranscript:(unsigned long long)a0;
- (BOOL)shouldStopAfterAddingStateString:(id)a0;
- (unsigned long long)stoppageReason;

@end
