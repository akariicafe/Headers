@class NSArray, NSMutableDictionary, NSString, TIKeyboardCandidate, NSMutableArray, NSDictionary;

@interface TIWordSearchCandidateResultSet : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *mutableCandidates;
@property (retain, nonatomic) NSMutableDictionary *mutableCandidateRefsDictionary;
@property (copy, nonatomic) NSArray *autoconvertedCandidates;
@property (retain, nonatomic) NSString *autoconvertedCandidateString;
@property (retain, nonatomic) NSString *autoconvertedInputString;
@property (readonly, nonatomic) NSMutableArray *mutableProactiveTriggers;
@property (readonly, nonatomic) NSArray *candidates;
@property (copy, nonatomic) TIKeyboardCandidate *candidateAfterSegmentBreak;
@property (readonly, nonatomic) NSDictionary *candidateRefsDictionary;
@property (copy, nonatomic) NSArray *disambiguationCandidates;
@property (nonatomic) unsigned long long selectedDisambiguationCandidateIndex;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (retain, nonatomic) NSArray *proactiveCandidates;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)emptySet;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCandidates:(id)a0 candidateRefsDictionary:(id)a1;
- (void)addMecabraCandidate:(id)a0 mecabraCandidateRef:(void *)a1;
- (void)addMecabraFacemarkCandidate:(void *)a0 forInput:(id)a1;
- (void)addMecabraProactiveCandidate:(void *)a0 triggerSourceType:(unsigned char)a1;
- (void)addProactiveTrigger:(id)a0;
- (void)addSyntheticMecabraCandidateWithSurface:(id)a0 input:(id)a1;
- (void)addSyntheticMecabraCandidateWithSurface:(id)a0 input:(id)a1 isExtension:(BOOL)a2;
- (void)addSyntheticMecabraCandidateWithSurface:(id)a0 input:(id)a1 isExtension:(BOOL)a2 deleteCount:(unsigned long long)a3;
- (void)addSyntheticMecabraCandidateWithSurface:(id)a0 input:(id)a1 isExtension:(BOOL)a2 deleteCount:(unsigned long long)a3 cursorMovement:(long long)a4;
- (void)addSyntheticMecabraCandidateWithSurface:(id)a0 input:(id)a1 isExtension:(BOOL)a2 deleteCount:(unsigned long long)a3 cursorMovement:(long long)a4 annotation:(id)a5;
- (void)addSyntheticMecabraProactiveCandidate:(id)a0 triggerSourceType:(unsigned char)a1;
- (void)clearProactiveTriggers;
- (id)initWithCandidates:(id)a0 candidateRefsDictionary:(id)a1;
- (id)initWithCandidates:(id)a0 candidateRefsDictionary:(id)a1 disambiguationCandidates:(id)a2 selectedDisambiguationCandidateIndex:(unsigned long long)a3;
- (void)insertMecabraCandidate:(id)a0 mecabraCandidateRef:(void *)a1 atIndex:(unsigned long long)a2;
- (void)insertSyntheticMecabraCandidateWithSurface:(id)a0 input:(id)a1 atIndex:(unsigned long long)a2;
- (void)moveCandidate:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)setAutoconvertedMecabraCandidates:(id)a0 candidateRefsDictionary:(id)a1;
- (void)updateSupplementalMecabraCandidate:(id)a0 withMecabraCandidateRef:(void *)a1;

@end
