@class GCPhysicalInputProfile;

@interface _GCHandSkeleton : NSObject {
    GCPhysicalInputProfile *_physicalInput;
    long long _handedness;
    struct { struct { void /* unknown type, empty encoding */ position; struct { void /* unknown type, empty encoding */ vector; } orientation; } boneTransforms[31]; } _boneData;
    const struct **referenceSkeletons;
    struct { struct { void /* unknown type, empty encoding */ vector; } real; struct { void /* unknown type, empty encoding */ vector; } dual; } referenceDQs[4][31];
    long long _interpolationMethod;
    float _lastFingerPositions[5];
}

@property (readonly) BOOL rightHand;

- (void).cxx_destruct;
- (struct { struct { struct { } x0; } x0[31]; })_boneDataWithMotionRange:(long long)a0 curlAmts:(const struct { float x0; float x1; float x2; float x3; float x4; } *)a1;
- (struct { struct { struct { } x0; } x0[31]; })_boneDataWithMotionRangeDq:(long long)a0 curlAmts:(const struct { float x0; float x1; float x2; float x3; float x4; } *)a1;
- (struct { struct { struct { } x0; } x0[31]; })_convertToModelSpaceUsingDQs:(const struct { struct { struct { } x0; } x0[31]; } *)a0;
- (struct { struct { struct { } x0; } x0[31]; })_convertToModelSpaceUsingMatrices:(const struct { struct { struct { } x0; } x0[31]; } *)a0;
- (void)_setInterpolationMethod:(long long)a0;
- (struct { struct { struct { } x0; } x0[31]; })boneDataWithTransformSpace:(long long)a0 motionRange:(long long)a1;
- (struct { struct { struct { } x0; } x0[31]; })boneDataWithTransformSpace:(long long)a0 referencePose:(long long)a1;
- (BOOL)fingerPositionsChangedForCurlAmts:(const struct { float x0; float x1; float x2; float x3; float x4; } *)a0;
- (float)getFingerCurlAmt:(const struct { float x0; float x1; float x2; float x3; float x4; } *)a0 boneType:(long long)a1;
- (id)initWithBoneData:(struct { struct { struct { } x0; } x0[31]; })a0 profile:(id)a1 handedness:(long long)a2;

@end
