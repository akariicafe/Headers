@interface VTSiriPHash : NSObject

@property short signalEstimate;
@property unsigned char signalFractional;

+ (unsigned long long)sampleSizeForSignalEstimate;
+ (id)sharedPhash;

- (id)init;
- (unsigned short)pHash:(float *)a0 length:(int)a1;

@end
