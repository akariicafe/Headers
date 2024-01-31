@class NSNumber, AVPlayerItem;

@interface ISPlayerContent : NSObject

@property (readonly, nonatomic) struct CGImage { } *photo;
@property (readonly, nonatomic) int photoEXIFOrientation;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property (readonly, nonatomic) AVPlayerItem *videoPlayerItem;
@property (readonly, nonatomic) BOOL photoHasColorAdjustments;
@property (readonly, nonatomic) BOOL photoIsOriginal;
@property (readonly, nonatomic) BOOL supportsVitality;
@property (readonly, nonatomic) NSNumber *variationIdentifier;

- (unsigned long long)hash;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPhoto:(struct CGImage { } *)a0 photoIsOriginal:(BOOL)a1 photoEXIFOrientation:(int)a2 photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4 photoHasColorAdjustments:(BOOL)a5 videoPlayerItem:(id)a6 variationIdentifier:(id)a7 supportsVitality:(BOOL)a8;

@end
