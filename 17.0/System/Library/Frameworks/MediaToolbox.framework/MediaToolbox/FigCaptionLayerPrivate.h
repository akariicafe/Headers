@class NSMutableArray, NSMutableDictionary;

@interface FigCaptionLayerPrivate : NSObject {
    struct OpaqueFigCFCaptionRenderer { } *renderer;
    NSMutableArray *captionElementLayers;
    struct OpaqueFigSimpleMutex { } *renderMutex;
    struct OpaqueFigReentrantMutex { } *layoutSublayersMutex;
    unsigned char shouldDrawGrid;
    NSMutableArray *captionBackdropLayers;
    unsigned char enableBackdrop;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoRelativeToViewport;
    struct FigGeometryMargins { struct FigGeometryDimension { double value; unsigned int units; unsigned int flags; } left; struct FigGeometryDimension { double value; unsigned int units; unsigned int flags; } right; struct FigGeometryDimension { double value; unsigned int units; unsigned int flags; } top; struct FigGeometryDimension { double value; unsigned int units; unsigned int flags; } bottom; } captionsAvoidanceMargins;
    unsigned char enableGMSpew;
    NSMutableDictionary *options;
    BOOL separated;
    BOOL separatedUpdated;
}

@end
