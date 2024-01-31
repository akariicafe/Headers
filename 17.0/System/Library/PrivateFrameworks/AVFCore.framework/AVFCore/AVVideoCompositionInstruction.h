@class NSArray, NSString, AVVideoCompositionInstructionInternal;

@interface AVVideoCompositionInstruction : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, AVVideoCompositionInstruction> {
    AVVideoCompositionInstructionInternal *_instruction;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, retain, nonatomic) struct CGColor { } *backgroundColor;
@property (readonly, copy, nonatomic) NSArray *layerInstructions;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setBackgroundColor:(struct CGColor { } *)a0;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)setTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setValuesFromDictionary:(id)a0;
- (id)blendingTransferFunction;
- (void)setBlendingTransferFunction:(id)a0;
- (void)setEnablePostProcessing:(BOOL)a0;
- (void)setLayerInstructions:(id)a0;
- (void)setRequiredSourceSampleDataTrackIDs:(id)a0;

@end
