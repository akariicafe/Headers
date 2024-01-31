@interface ConversationKit.PipZoomControl : NSObject <CAMZoomControlDelegate> {
    void /* unknown type, empty encoding */ zoomControl;
    void /* unknown type, empty encoding */ pinchGestureRecognizer;
    void /* unknown type, empty encoding */ minimumZoomFactor;
    void /* unknown type, empty encoding */ zoomCameraSwitchFactorDefault;
    void /* unknown type, empty encoding */ zoomControlOffset;
    void /* unknown type, empty encoding */ maximumZoomFactor;
    void /* unknown type, empty encoding */ maximumZoomFactorScaler;
    void /* unknown type, empty encoding */ currentZoomFactor;
    void /* unknown type, empty encoding */ currentCameraUID;
    void /* unknown type, empty encoding */ pinchStartZoomFactor;
}

@property (class, nonatomic, readonly) BOOL isZoomSupported;

- (void)zoomControl:(id)a0 didChangeZoomFactor:(double)a1 interactionType:(long long)a2;
- (id)init;
- (void).cxx_destruct;
- (void)handlePinchWithSender:(id)a0;

@end
