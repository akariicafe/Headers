@class NSIndexSet;

@interface PTFocusBlurMap : NSObject {
    struct PTFigCaptureStreamFocusBlurMap { unsigned char x0; struct PTFigCaptureStreamFocusBlurMapHeader { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; float x17; float x18; } x1; struct PTFigCaptureStreamFocusBlurMapTile { short x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; } x2[512]; } *_map;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } autoFocusRect;
@property (readonly) unsigned long long sensorWidth;
@property (readonly) unsigned long long sensorHeight;
@property (readonly) unsigned long long validX;
@property (readonly) unsigned long long validY;
@property (readonly) unsigned long long validWidth;
@property (readonly) unsigned long long validHeight;
@property (readonly) unsigned long long inputX;
@property (readonly) unsigned long long inputY;
@property (readonly) unsigned long long inputWidth;
@property (readonly) unsigned long long inputHeight;
@property (readonly) unsigned long long tileWidth;
@property (readonly) unsigned long long tileHeight;
@property (readonly) unsigned long long tileCountX;
@property (readonly) unsigned long long tileCountY;
@property (readonly) NSIndexSet *inFocusRegion;
@property (readonly) NSIndexSet *largestFocusRegion;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } inputValidNormalizedRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusValidNormalizedRect;

- (id)init;
- (void)dealloc;
- (id)initWithFocusBlurMapDictionary:(id)a0;
- (id)_blurExtendedNodes:(id)a0 blurMin:(int)a1 blurMax:(int)a2;
- (id)_blurExtendedNodes:(id)a0 options:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boxFromComponent:(id)a0;
- (id)_connectedComponentWithNode:(unsigned long long)a0 unvisited:(id)a1;
- (id)_connectedComponents:(id)a0;
- (void)_getBlurRangeOfNodes:(id)a0 blurMin:(int *)a1 blurMax:(int *)a2;
- (id)_inFocusNodes;
- (void)_initValidRectFromSensorWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_inputSensorPixelRect;
- (id)_largestOfComponents:(id)a0;
- (id)_nodesBetweenBlurMin:(int)a0 blurMax:(int)a1;
- (id)_nodesForNormalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_nodesFromTileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalRectFromPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pixelRectFromNormalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sensorPixelRectFromRegion:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sensorPixelRectFromTileRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tileRectFromNodes:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_tileRectFromSensorPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validNormalizedRectFromSensorPixelRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFocusBlurMapData:(id)a0 sensorSize:(struct CGSize { double x0; double x1; })a1 validSensorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (unsigned long long)tileXForTile:(unsigned long long)a0;
- (unsigned long long)tileYForTile:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })validNormalizedRectFromRegion:(id)a0;

@end
