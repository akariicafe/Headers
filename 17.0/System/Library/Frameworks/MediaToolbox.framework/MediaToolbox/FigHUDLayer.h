@interface FigHUDLayer : CALayer {
    struct __CTFont { } *_Font;
    double _FontSize;
    struct __CFDictionary { } *_TextAttributes;
    struct __CFArray { } *_Labels;
    struct __CFArray { } *_Values;
    struct __CFArray { } *_LabelColors;
    struct __CFArray { } *_ValueColors;
}

- (id)init;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setValue:(struct __CFString { } *)a0 atIndex:(int)a1;
- (long long)addLine:(struct __CFString { } *)a0 withColorIndex:(int)a1;
- (long long)addLine:(struct __CFString { } *)a0 withLabelColorIndex:(int)a1 withValueColorIndex:(int)a2;
- (struct __CFArray { } *)getLabels;
- (struct __CFArray { } *)getValues;
- (void)resetLines;
- (void)setFont:(struct __CFString { } *)a0 withPointSize:(double)a1;
- (void)setValueAtIndex:(int)a0 format:(id)a1;

@end
