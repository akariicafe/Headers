@class NSArray, NSMutableArray, PRErrorModel;

@interface PRCandidateList : NSObject {
    NSMutableArray *_candidates;
    unsigned long long _maxCount;
    struct _NSRange { unsigned long long location; unsigned long long length; } _defaultReplacementRange;
    PRErrorModel *_errorModel;
    NSArray *_capitalizationDictionaryArray;
}

- (unsigned long long)maxCount;
- (BOOL)isFull;
- (void)dealloc;
- (unsigned long long)count;
- (id)description;
- (id)candidates;
- (void)addCandidate:(id)a0;
- (void)addCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 errorType:(unsigned long long)a2;
- (void)addCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 errorType:(unsigned long long)a3;
- (void)addCandidateWithString:(id)a0 errorType:(unsigned long long)a1;
- (void)addCandidateWithString:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2;
- (void)addCandidateWithWords:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 errorType:(unsigned long long)a2;
- (void)addInsertionCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 intendedPrecedingCharacter:(unsigned short)a3 insertedCharacter:(unsigned short)a4 intendedFollowingCharacter:(unsigned short)a5;
- (void)addOmissionCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 intendedPrecedingCharacter:(unsigned short)a3 omittedCharacter:(unsigned short)a4 intendedFollowingCharacter:(unsigned short)a5;
- (void)addReplacementCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 intendedCharacter:(unsigned short)a3 actualCharacter:(unsigned short)a4;
- (void)addTranspositionCandidateWithBuffer:(char *)a0 encoding:(unsigned int)a1 transform:(unsigned long long)a2 intendedFirstCharacter:(unsigned short)a3 intendedSecondCharacter:(unsigned short)a4;
- (id)candidateStrings;
- (id)candidateWithString:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })defaultReplacementRange;
- (id)initWithMaxCount:(unsigned long long)a0 defaultReplacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 customErrorModel:(id)a2 capitalizationDictionaryArray:(id)a3;

@end
