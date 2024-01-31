@class NSArray, AVMutableVideoCompositionInstructionInternal;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction {
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (retain, nonatomic) struct CGColor { } *backgroundColor;
@property (copy, nonatomic) NSArray *layerInstructions;
@property (nonatomic) BOOL enablePostProcessing;
@property (copy, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;

+ (id)videoCompositionInstruction;

@end
