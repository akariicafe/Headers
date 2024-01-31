@class NSArray, AVWeakReference, NSMutableDictionary, AVCaptureDataOutputDelegateCallbackHelper;

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *metadataObjectTypes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectOfInterest;
    BOOL faceTrackingMetadataObjectTypesAvailable;
    long long faceTrackingMaxFaces;
    BOOL faceTrackingUsesFaceRecognition;
    BOOL faceTrackingPlusEnabled;
    float faceTrackingNetworkFailureThresholdMultiplier;
    BOOL videoPreviewHistogramMetadataObjectTypesAvailable;
    BOOL appClipCodeObjectTypeAvailable;
    BOOL textRegionObjectTypeAvailable;
    BOOL headObjectTypesAvailable;
    BOOL offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    NSMutableDictionary *previousTwoCMTimesByDetectorType;
}

- (id)init;
- (void)dealloc;

@end
