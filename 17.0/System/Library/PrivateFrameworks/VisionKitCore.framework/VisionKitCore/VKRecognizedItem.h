@class VNObservation, NSUUID, VKFrameInfo, VKQuad;

@interface VKRecognizedItem : NSObject {
    VKFrameInfo *_frameInfo;
    VKQuad *_visionQuad;
    VKQuad *_layerQuad;
}

@property (readonly, nonatomic) VKQuad *visionQuad;
@property (retain, nonatomic) VNObservation *observation;
@property (readonly, nonatomic) VKFrameInfo *frameInfo;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) VKQuad *layerQuad;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)applyHomographyWarpTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (void)associateWithItem:(id)a0;
- (id)initWithFrameInfo:(id)a0 rectangleObservation:(id)a1;
- (id)initWithFrameInfo:(id)a0 rectangleObservation:(id)a1 layoutDirection:(unsigned long long)a2;
- (BOOL)shouldAssociateWithItem:(id)a0;

@end
