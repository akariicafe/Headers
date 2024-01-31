@class _STCommandRecognizerResult, _STTranscriberMultisegmentResult;

@interface _SFTranscriberResult : NSObject

@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } range;
@property (readonly, copy, nonatomic) _STTranscriberMultisegmentResult *normalizedTranscriberMultisegmentResult;
@property (readonly, copy, nonatomic) _STCommandRecognizerResult *normalizedCommandRecognizerResult;
@property (readonly, copy, nonatomic) _STTranscriberMultisegmentResult *contextualizedTranscriberMultisegmentResult;
@property (readonly, copy, nonatomic) _STCommandRecognizerResult *contextualizedCommandRecognizerResult;

- (void).cxx_destruct;
- (id)initWithRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 normalizedTranscriberMultisegmentResult:(id)a1 normalizedCommandRecognizerResult:(id)a2 contextualizedTranscriberMultisegmentResult:(id)a3 contextualizedCommandRecognizerResult:(id)a4;

@end
