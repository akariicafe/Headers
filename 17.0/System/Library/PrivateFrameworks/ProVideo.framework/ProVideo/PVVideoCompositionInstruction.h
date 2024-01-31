@class NSArray, NSString, PVInstructionGraphNode;

@interface PVVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying>

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic) BOOL enablePostProcessing;
@property (nonatomic) BOOL containsTweening;
@property (nonatomic) BOOL isFreezeFrame;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (retain, nonatomic) PVInstructionGraphNode *outputNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)loadInstructionGraphNodes:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (void)unloadInstructionGraphNodes;
- (id)videoInstructionDescription;

@end
