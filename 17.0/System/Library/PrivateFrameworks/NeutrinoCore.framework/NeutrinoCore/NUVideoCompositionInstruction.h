@class NSString, NSArray, NSMutableDictionary, NURenderContext, NUColorSpace, NURenderNode, NUComposition, NURenderJob;

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {
    NSMutableDictionary *_sourceIdentifiersByTrackID;
    NSMutableDictionary *_sourceIdentifiersByMetadataTrackID;
}

@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (retain, nonatomic) NSArray *requiredSourceTrackIDs;
@property (weak, nonatomic) NURenderJob *renderJob;
@property (retain) NURenderNode *videoRenderPrepareNode;
@property (copy, nonatomic) NSString *name;
@property (retain) NURenderContext *renderContext;
@property (retain, nonatomic) NUComposition *adjustmentComposition;
@property (retain, nonatomic) NSArray *pipelineFilters;
@property (nonatomic) struct { long long numerator; long long denominator; } renderScale;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) BOOL isDolbyVision;
@property (nonatomic) float playbackRate;
@property (nonatomic) long long sampleMode;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInstructionForAsset:(id)a0 error:(out id *)a1;
+ (id)instructionForVideoTrack:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSourceIdentifier:(id)a0 forTrackID:(id)a1;
- (BOOL)isEqualToInstruction:(id)a0;
- (id)metadataTrackIDForSourceIdentifier:(id)a0;
- (void)setSourceIdentifier:(id)a0 forMetadataTrackID:(id)a1;
- (id)sourceIdentifierForMetadataTrackID:(id)a0;
- (id)sourceIdentifierForTrackID:(id)a0;
- (id)trackIDForSourceIdentifier:(id)a0;

@end
