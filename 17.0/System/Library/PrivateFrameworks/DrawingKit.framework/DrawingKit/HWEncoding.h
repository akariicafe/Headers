@interface HWEncoding : NSObject

+ (id)decodeHandwritingFromData:(id)a0;
+ (id)encodeHandwriting:(id)a0 compress:(BOOL)a1;
+ (id)decodedBrushStrokesWithData:(id)a0 inCanvasBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inStrokesFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 strokeDataFieldCount:(unsigned int)a3 count:(unsigned long long)a4;
+ (id)encodeBrushStrokesAsData:(id)a0 inCanvasBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inStrokesFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (id)protoDrawingFromDrawing:(id)a0 compress:(BOOL)a1;
+ (id)protoMessageFromHandwriting:(id)a0;
+ (void)writeDataToDisk:(id)a0 withName:(id)a1;

@end
