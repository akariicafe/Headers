@interface FRCFrameBurstyDropInfo : NSObject

@property (nonatomic) long long burstyIdx;
@property (nonatomic) long long burstyStart;
@property (nonatomic) long long burstyLen;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } burstyBaseDuration;

@end
