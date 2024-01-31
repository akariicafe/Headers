@class NSString, NSArray;

@interface ACTUserMentalCursor : NSObject

@property (nonatomic) unsigned long long segmentCursor;
@property (nonatomic) unsigned long long positionInCurrentInternalSegment;
@property (readonly, nonatomic) NSString *intendedText;
@property (readonly, nonatomic) NSString *currentExternalSegment;
@property (readonly, nonatomic) NSString *currentInternalSegment;
@property (readonly, nonatomic) NSArray *externalSegments;
@property (readonly, nonatomic) NSArray *internalSegments;
@property (readonly, nonatomic) BOOL atBeginningOfText;
@property (readonly, nonatomic) BOOL atEndOfText;
@property (readonly, nonatomic) NSString *currentLongCharacter;
@property (readonly, nonatomic) NSString *nextLongCharacter;
@property (readonly, nonatomic) NSString *previousLongCharacter;
@property (readonly, nonatomic) NSString *currentComposedCharacter;
@property (readonly, nonatomic) BOOL nextLongCharacterEndsSegment;

- (id)init;
- (void).cxx_destruct;
- (void)advancePositionByString:(id)a0;
- (BOOL)advanceSegmentCursor;
- (void)enumerateRemainingLongCharactersForCurrentSegment:(id /* block */)a0;
- (id)initWithInternalSegments:(id)a0 externalSegments:(id)a1;
- (id)initWithInternalSegments:(id)a0 externalSegments:(id)a1 segmentCursor:(unsigned long long)a2 position:(unsigned long long)a3;
- (id)longCharacterAtSegment:(unsigned long long)a0 position:(unsigned long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfInputSegmentsForCandidate:(id)a0;
- (void)rewindPositionByString:(id)a0;
- (BOOL)rewindSegmentCursor;

@end
