@class NSArray;

@interface AVTimedMetadataGroupInternal : NSObject {
    NSArray *items;
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
    struct opaqueCMSampleBuffer { } *backingSBuf;
}

@end
