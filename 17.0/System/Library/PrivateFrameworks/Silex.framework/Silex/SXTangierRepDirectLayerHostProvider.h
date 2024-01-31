@class CALayer, NSString;

@interface SXTangierRepDirectLayerHostProvider : NSObject <TSDRepDirectLayerHostProvider>

@property (retain, nonatomic) CALayer *aboveRepsLayerHost;
@property (retain, nonatomic) CALayer *underRepsLayerHost;
@property (retain, nonatomic) CALayer *overlayLayerHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)directLayerHostForRep:(id)a0;
- (void)directLayerHostUpdateAdditionalLayersAboveRepLayers:(id)a0;
- (void)directLayerHostUpdateAdditionalLayersUnderRepLayers:(id)a0;
- (void)directLayerHostUpdateRepOverlayLayers:(id)a0;

@end
