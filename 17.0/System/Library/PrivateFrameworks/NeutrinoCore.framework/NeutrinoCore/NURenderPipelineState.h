@class NSArray, NSDictionary, NURenderTagGroup, NSMutableArray;
@protocol NUDevice;

@interface NURenderPipelineState : NSObject <NSCopying> {
    NSMutableArray *_groupStack;
}

@property (readonly) long long serialNumber;
@property long long evaluationMode;
@property long long mediaComponentType;
@property long long auxiliaryImageType;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } rawTime;
@property long long sampleMode;
@property struct { long long numerator; long long denominator; } scale;
@property long long roundingPolicy;
@property BOOL disableIntermediateCaching;
@property (retain, nonatomic) id<NUDevice> device;
@property (copy, nonatomic) NSArray *pipelineFilters;
@property (copy, nonatomic) NSDictionary *videoFrames;
@property (copy, nonatomic) NSDictionary *videoMetadataSamples;
@property (readonly) NURenderTagGroup *rootGroup;
@property (readonly) NURenderTagGroup *currentGroup;
@property (readonly) unsigned long long groupCount;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)beginGroupWithName:(id)a0 error:(out id *)a1;
- (BOOL)endGroupWithName:(id)a0 error:(out id *)a1;
- (BOOL)applyPipelineSettings:(id)a0 error:(out id *)a1;
- (id)initForCopy;
- (id)pipelineSettingsFromSourceSettings:(id)a0;
- (void)resetRenderTagGroups;

@end
