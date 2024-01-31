@class NSArray, NSString;

@interface AVVideoCompositionInstructionInternal : NSObject {
    struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
    struct CGColor { } *backgroundColor;
    NSArray *layerInstructions;
    BOOL enablePostProcessing;
    NSString *blendingTransferFunction;
    NSArray *requiredSourceSampleDataTrackIDs;
}

@end
