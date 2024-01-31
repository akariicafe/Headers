@class PTUtil;

@interface PTHumanDetections : NSObject {
    struct PTHumanDetection { int groupId; void /* unknown type, empty encoding */ faceRect; void /* unknown type, empty encoding */ faceRectCenteredEma; void /* unknown type, empty encoding */ faceRectCenteredEmaEma; void /* unknown type, empty encoding */ headRotation; float faceConfidenceLevel; BOOL eyeConfidenceLevel[2]; void /* unknown type, empty encoding */ eyeRect[2]; BOOL hasDetectionThisFrame; float confidence; } _detectionsRaw[4];
    struct PTHumanDetection { int groupId; void /* unknown type, empty encoding */ faceRect; void /* unknown type, empty encoding */ faceRectCenteredEma; void /* unknown type, empty encoding */ faceRectCenteredEmaEma; void /* unknown type, empty encoding */ headRotation; float faceConfidenceLevel; BOOL eyeConfidenceLevel[2]; void /* unknown type, empty encoding */ eyeRect[2]; BOOL hasDetectionThisFrame; float confidence; } _detectionsFiltered[4];
    void /* unknown type, empty encoding */ _faceDetectionsRaw[4];
    PTUtil *_util;
    float _deadzone;
    float _deadzoneMax;
    float _faceRectOverlapThreshold;
    void /* unknown type, empty encoding */ _faceDetectionsFiltered[4];
    int _faceDetectionsFilteredState[4];
}

@property (readonly) int detectionsRawCount;
@property (readonly) struct PTHumanDetection { int x0; float x1; BOOL x2[2]; void /* unknown type, empty encoding */ x3[2]; BOOL x4; float x5; } *detectionsRaw;
@property (readonly) struct PTHumanDetection { int x0; float x1; BOOL x2[2]; void /* unknown type, empty encoding */ x3[2]; BOOL x4; float x5; } *detectionsFiltered;
@property (readonly) void *faceDetectionsRaw;
@property (readonly) void *faceDetectionsFiltered;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (void)clearFilterDetections;
- (int *)faceDetectionsFilteredState:(BOOL)a0;
- (void)filterDetections;
- (void)renderDebugRects:(id)a0 outTexture:(id)a1 debugFaceRects:(BOOL)a2;
- (void)unpackDetections:(id)a0;

@end
