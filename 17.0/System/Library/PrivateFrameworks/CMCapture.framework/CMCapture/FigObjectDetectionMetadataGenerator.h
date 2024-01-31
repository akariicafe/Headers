@class NSMutableArray, NSMutableDictionary, FTBipartiteMatcher, NSObject, VNSession;
@protocol OS_dispatch_queue;

@interface FigObjectDetectionMetadataGenerator : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _regionOfInterest;
    unsigned int _maxHumanFaces;
    BOOL _humanFaceEyeDetectionEnabled;
    BOOL _humanFaceSmileDetectionEnabled;
    BOOL _humanFaceBlinkDetectionEnabled;
    unsigned int _maxHumanHeads;
    unsigned int _maxHumanBodies;
    unsigned int _maxHumanFullBodies;
    unsigned int _maxDogBodies;
    unsigned int _maxDogHeads;
    unsigned int _maxCatBodies;
    unsigned int _maxCatHeads;
    unsigned int _maxSalientObjects;
    unsigned int _maxSportsBalls;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_detectObjectQueue;
    BOOL _prepared;
    unsigned long long _objectDetectionHostTime;
    unsigned int _objectDetectionInterval;
    float _maxMatchCost;
    unsigned int _previousDetectionsThreshold;
    BOOL _objectDetectionIsRunning;
    NSMutableDictionary *_objectMetadataDictionary;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferInSession;
    VNSession *_vnSession;
    NSMutableArray *_figFaceObservations;
    NSMutableArray *_figHumanBodyObservations;
    unsigned long long _metadataFaceID;
    unsigned long long _metadataHumanBodyID;
    FTBipartiteMatcher *_objectTrackingMatcher;
}

@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;
@property unsigned int maxHumanFaces;
@property BOOL humanFaceEyeDetectionEnabled;
@property BOOL humanFaceSmileDetectionEnabled;
@property BOOL humanFaceBlinkDetectionEnabled;
@property unsigned int maxHumanHeads;
@property unsigned int maxHumanBodies;
@property unsigned int maxHumanFullBodies;
@property unsigned int maxDogBodies;
@property unsigned int maxDogHeads;
@property unsigned int maxCatBodies;
@property unsigned int maxCatHeads;
@property unsigned int maxSalientObjects;
@property unsigned int maxSportsBalls;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (void)unprepare;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)getDetectedObjectsForPixelBuffer:(struct __CVBuffer **)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)prepareForVideoFormat:(struct opaqueCMFormatDescription { } *)a0;

@end
