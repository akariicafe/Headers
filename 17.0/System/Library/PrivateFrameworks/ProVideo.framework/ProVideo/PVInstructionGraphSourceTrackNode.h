@protocol PVStabilizationDelegate;

@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {
    struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int __a_value; } __a_; } _sourceTrackloaded;
}

@property (nonatomic) BOOL stabilizationDelegateRespondsToDidStabilize;
@property (nonatomic) int trackID;
@property (nonatomic) int dataTrackID;
@property (nonatomic) int depthTrackID;
@property (nonatomic) int metadataTrackID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) int fillMode;
@property (retain, nonatomic) id<PVStabilizationDelegate> stabilizationDelegate;
@property (retain, nonatomic) id userContext;
@property (nonatomic) struct CGSize { double width; double height; } clipNaturalSize;

+ (id)newSourceTrackNode:(int)a0 animation:(id)a1 fillMode:(int)a2 clipNaturalSize:(struct CGSize { double x0; double x1; })a3;
+ (id)newSourceTrackNode:(int)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 cropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 clipNaturalSize:(struct CGSize { double x0; double x1; })a3;
+ (id)newSourceTrackNodeWithStabilizationDelegate:(id)a0 userContext:(id)a1 trackID:(int)a2 dataTrackID:(int)a3 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a4 clipNaturalSize:(struct CGSize { double x0; double x1; })a5;
+ (id)newSourceTrackNodeWithStabilizationDelegate:(id)a0 userContext:(id)a1 trackID:(int)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 clipNaturalSize:(struct CGSize { double x0; double x1; })a4;

- (id)init;
- (BOOL)isPortrait;
- (void).cxx_destruct;
- (id)requiredSourceSampleDataTrackIDs;
- (id)requiredSourceTrackIDs;
- (struct PCRect<double> { double x0; double x1; double x2; double x3; })inputSizeForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (id)instructionGraphNodeDescription;
- (void)loadIGNode:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0 returnLoadedEffects:(id)a1;
- (id)dotTreeLabel:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a0;
- (struct HGRef<HGNode> { struct HGNode *x0; })internalHGNodeForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 trackInputs:(const void *)a1 renderer:(const void *)a2 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a3;
- (BOOL)isPassthru;
- (struct PCMatrix44Tmpl<double> { double x0[4][4]; })pixelTransformForPVEffect:(id)a0 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext *x0; })a1;
- (void)unloadIGNode;

@end
