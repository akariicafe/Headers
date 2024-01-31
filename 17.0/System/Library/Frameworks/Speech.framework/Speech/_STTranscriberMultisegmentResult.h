@class NSArray;

@interface _STTranscriberMultisegmentResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *segments;
@property (readonly, copy, nonatomic) NSArray *transcriptions;
@property (readonly, nonatomic) unsigned long long earResultType;
@property (readonly, copy, nonatomic) NSArray *nBestChoices;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } recognitionAudioRange;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSegments:(id)a0 transcriptions:(id)a1 earResultType:(unsigned long long)a2 nBestChoices:(id)a3 recognitionAudioRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;

@end
