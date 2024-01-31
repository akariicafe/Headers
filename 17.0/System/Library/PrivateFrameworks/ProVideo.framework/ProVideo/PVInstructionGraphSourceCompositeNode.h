@class NSString, NSURL, PVInstructionGraphNode, PVImageBuffer, NSDictionary, NSObject, PVColorSpace, PVCompositeDelegateEffect;
@protocol PVCompositeDelegate, PVImageSeqDelegate;

@interface PVInstructionGraphSourceCompositeNode : PVInstructionGraphSourceNode {
    struct HGRef<PVRenderManager> { struct PVRenderManager *m_Obj; } _renderManager;
}

@property (nonatomic) int nodeType;
@property (nonatomic) int trackID;
@property (retain, nonatomic) NSURL *imageURL;
@property (retain, nonatomic) NSString *imageKey;
@property (retain, nonatomic) PVImageBuffer *imageBuffer;
@property (nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) unsigned int outputFormat;
@property (retain, nonatomic) PVInstructionGraphNode *graphNode;
@property (retain, nonatomic) NSDictionary *inputMap;
@property (retain, nonatomic) id<PVImageSeqDelegate> imageSeqDelegate;
@property (retain, nonatomic) id<PVCompositeDelegate> renderDelegate;
@property (retain, nonatomic) NSObject *metadata;
@property (retain, nonatomic) id userContext;
@property (nonatomic) BOOL canPreprocess;
@property (nonatomic) BOOL canRender;
@property (retain, nonatomic) PVCompositeDelegateEffect *delegateEffect;
@property (retain, nonatomic) PVColorSpace *colorSpace;

+ (id)newSourceCompositeNodeWithDelegate:(id)a0 inputs:(id)a1 metadata:(id)a2 outputSize:(struct CGSize { double x0; double x1; })a3 outputFormat:(unsigned int)a4;
+ (id)newSourceCompositeNodeWithDelegate:(id)a0 inputs:(id)a1 userContext:(id)a2 outputSize:(struct CGSize { double x0; double x1; })a3 outputFormat:(unsigned int)a4;
+ (id)newSourceCompositeNodeWithGraphNode:(id)a0 outputSize:(struct CGSize { double x0; double x1; })a1 outputFormat:(unsigned int)a2;
+ (id)newSourceCompositeNodeWithPVImageBuffer:(id)a0;
+ (id)newSourceCompositeNodeWithTrack:(int)a0 outputSize:(struct CGSize { double x0; double x1; })a1;
+ (id)newSourceCompositeNodeWithURL:(id)a0 key:(id)a1 imageDelegate:(id)a2;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)requiredSourceTrackIDs;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (id)instructionGraphNodeDescription;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0 returnLoadedEffects:(id)a1;
- (void)addDotTreeLinks:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })conformInputImage:(id)a0 colorSpace:(id)a1 renderer:(const void *)a2 currentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a4;
- (struct HGRef<HGNode> { struct HGNode *x0; })conformNode:(struct HGRef<HGNode> { struct HGNode *x0; })a0 toSize:(struct HGRect { int x0; int x1; int x2; int x3; })a1;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (id)getAllSourceNodes;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (struct HGRef<HGNode> { struct HGNode *x0; })nodeForCompositeTrackMap:(const void *)a0;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)unloadIGNode;

@end
