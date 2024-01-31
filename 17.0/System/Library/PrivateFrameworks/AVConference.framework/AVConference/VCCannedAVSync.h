@interface VCCannedAVSync : NSObject

@property (nonatomic) double base;
@property (nonatomic) double modulo;

+ (id)sharedCannedAVSync;

- (void)clear;
- (id)init;
- (void)addStreamWithCount:(int)a0 rate:(double)a1;

@end
