@class NSString, CRDetectedLineRegion, CRRecognizedTextRegion, NSObject;
@protocol CRScriptCategory, CRTextRecognizerDecodingTransientResult;

@interface CRFeatureSequenceRecognitionInfo : NSObject <CRTextRecognizerFeatureInfo> {
    float _scale;
    long long _orientationAdjustment;
    double _orientationConfidence;
    NSString *_orientationOutputResult;
    NSObject<CRScriptCategory> *_sequenceScriptCategory;
    NSString *_sequenceScriptOutputResult;
    CRRecognizedTextRegion *_recognizedTextRegion;
    unsigned long long _layoutDirection;
    NSObject<CRTextRecognizerDecodingTransientResult> *_transientDecodingResult;
    struct CGSize { double width; double height; } _featureImageSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rotatedROI;
}

@property (retain) CRDetectedLineRegion *lineRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
