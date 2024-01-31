@class NSArray;

@interface CHContextualTextResults : NSObject

@property (retain, nonatomic) NSArray *textResults;

- (void).cxx_destruct;
- (id)topTranscription;
- (id)initWithTextResults:(id)a0;
- (id)textResultToIndexMappingFromTopTranscriptionWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 intersectionRanges:(id *)a1;

@end
