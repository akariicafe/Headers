@class ARSession, NSString, NSMutableDictionary, NSSet, NSObject;
@protocol ARSKViewDelegate;

@interface ARSKView : SKView <ARInternalSessionObserver, ARSessionProviding> {
    ARSession *_session;
    NSMutableDictionary *_nodesByAnchorIdentifier;
    NSSet *_lastFrameAnchors;
    long long _interfaceOrientation;
    struct CGSize { double width; double height; } _viewportSize;
}

@property (weak, nonatomic) NSObject<ARSKViewDelegate> *delegate;
@property (retain, nonatomic) ARSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (void)dealloc;
- (void)sessionInterruptionEnded:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)session:(id)a0 didChangeGeoTrackingStatus:(id)a1;
- (void)session:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)sessionWasInterrupted:(id)a0;
- (void)session:(id)a0 didUpdateFrame:(id)a1;
- (void)layoutSubviews;
- (void)sessionShouldAttemptRelocalization:(id)a0 completion:(id /* block */)a1;
- (id)initWithCoder:(id)a0;
- (void)session:(id)a0 cameraDidChangeTrackingState:(id)a1;
- (void)session:(id)a0 didOutputAudioSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 types:(unsigned long long)a1;
- (id)_anchorForNode:(id)a0 inFrame:(id)a1;
- (void)_updateAnchors:(id)a0 camera:(id)a1;
- (void)_updateNode:(id)a0 forAnchor:(id)a1 projectionMatrix:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 camera:(id)a3 orientation:(long long)a4;
- (id)anchorForNode:(id)a0;
- (id)nodeForAnchor:(id)a0;

@end
