@class MLMultiArray, NSOrderedSet;

@interface CVNLPActivationMatrix : NSObject

@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _espressoBuffer;
@property (nonatomic) struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _indexBuffer;
@property (nonatomic) double *_doubleScoreMatrix;
@property (retain, nonatomic) MLMultiArray *_multiArray;
@property (retain, nonatomic) MLMultiArray *_indexArray;
@property (nonatomic) long long _timestepCount;
@property (nonatomic) long long _observationCount;
@property (nonatomic) long long _timeStride;
@property (nonatomic) long long _observationStride;
@property (nonatomic) long long _type;
@property (nonatomic) struct CVNLPTextDecodingPruningPolicy { long long strategy; BOOL shouldSort; float threshold; unsigned int maxNumberOfCandidates; } _pruningPolicy;
@property long long _cachedPriorityQueueTimestep;
@property void *_cachedTimesample;
@property (nonatomic) BOOL _isDoubleDataType;
@property (nonatomic) BOOL _usingIndexes;
@property (readonly, nonatomic) long long _cachedBlankIndexTimestep;
@property (readonly, nonatomic) long long _cachedBlankIndex;
@property (retain, nonatomic) NSOrderedSet *characterObservations;
@property (nonatomic) long long blankIndex;
@property (readonly, nonatomic) long long domainType;
@property (readonly) MLMultiArray *getActivationsMultiArray;
@property (readonly) MLMultiArray *getIndicesMultiArray;

- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)_candidateSymbolAtIndex:(long long)a0 forTimestep:(long long)a1 outputScore:(double *)a2;
- (void)_enumerateNonBlankCandidatesInTimestep:(long long)a0 block:(id /* block */)a1;
- (void)_sortNonBlankCandidatesForTimestep:(long long)a0;
- (double)_valueForObservationIndex:(long long)a0 timestep:(long long)a1;
- (long long)blankIndexForTimestep:(long long)a0;
- (long long)characterIndexForObservationIndex:(long long)a0 timestep:(long long)a1;
- (void)enumerateNonBlankCandidatesInTimestep:(long long)a0 block:(id /* block */)a1;
- (id)initWithBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 domainType:(long long)a1 characterObservations:(id)a2 blankIndex:(long long)a3 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })a4;
- (id)initWithBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a0 indexBuffer:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; })a1 domainType:(long long)a2 characterObservations:(id)a3 blankIndex:(long long)a4 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })a5;
- (id)initWithMultiArray:(id)a0 characterObservations:(id)a1 blankIndex:(long long)a2 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })a3;
- (id)initWithMultiArray:(id)a0 domainType:(long long)a1 characterObservations:(id)a2 blankIndex:(long long)a3 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })a4;
- (id)initWithMultiArray:(id)a0 indexArray:(id)a1 domainType:(long long)a2 characterObservations:(id)a3 blankIndex:(long long)a4 pruningPolicy:(struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; })a5;
- (double)logProbabilityForBlankAtTimestep:(long long)a0;
- (double)logProbabilityForObservationIndex:(long long)a0 timestep:(long long)a1;
- (long long)observationCount;
- (double)probabilityForBlankAtTimestep:(long long)a0;
- (double)probabilityForObservationIndex:(long long)a0 timestep:(long long)a1;
- (long long)timestepCount;
- (id)topCandidateForTimestep:(long long)a0 outputLogProbability:(double *)a1;
- (id)topCandidateForTimestep:(long long)a0 outputLogProbability:(double *)a1 outputIndex:(long long *)a2;
- (id)topCandidateForTimestep:(long long)a0 outputProbability:(double *)a1 outputIndex:(long long *)a2;

@end
