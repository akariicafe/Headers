@class NSDate, CALayer, NSMutableDictionary, PDFPage, NSMutableArray, NSObject, PDFRenderingProperties, PDFTimer;
@protocol PDFPageLayerGeometryInterface;

@interface PDFPageLayerPrivate : NSObject {
    PDFPage *page;
    NSObject<PDFPageLayerGeometryInterface> *geometryInterface;
    PDFRenderingProperties *renderingProperties;
    long long oldPageRotation;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } oldBoundsForBox;
    CALayer *tilesLayer;
    CALayer *shadowLayer;
    int generationCount;
    double lastLayoutZoomFactor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastLayerFrameInRootView;
    NSDate *lastZoomChange;
    BOOL zoomChangeScheduled;
    double zoomGenerationDelay;
    unsigned long long visibilityDelegateIndex;
    BOOL tileLayerHidden;
    NSMutableArray *tiles;
    BOOL allowUpdate;
    PDFTimer *forcedUpdateTimer;
    BOOL isForcingUpdate;
    _Atomic BOOL isTiling;
    _Atomic BOOL requestedTiling;
    CALayer *effectsLayer;
    NSMutableDictionary *pageLayerEffects;
}

- (void).cxx_destruct;

@end
