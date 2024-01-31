@class MFFont, MFPath, MFBrush, OITSUColor, MFTransform, NSMutableArray, NSObject, MFPalette, MFPen;
@protocol MFDeviceDriver;

@interface MFDeviceContext : NSObject <NSCopying> {
    NSObject<MFDeviceDriver> *m_driver;
    BOOL m_textUpdateCP;
    double m_miterLimit;
    int m_textHorizontalAlign;
    int m_textVerticalAlign;
    int m_textDirection;
    MFFont *m_font;
    OITSUColor *m_textColour;
    int m_textBreakExtra;
    int m_textBreakCount;
    int m_textCharExtra;
    OITSUColor *m_bkColour;
    int m_bkMode;
    struct CGPoint { double x; double y; } m_brushOrg;
    struct CGPoint { double x; double y; } m_penPos;
    int m_arcDirection;
    int m_polyFillMode;
    MFTransform *m_transform;
    MFPen *m_pen;
    MFBrush *m_brush;
    MFPalette *m_selectedPalette;
    int m_rop2;
    int m_stretchMode;
    MFPath *m_path;
}

@property (readonly, nonatomic) NSMutableArray *clippingPaths;
@property (nonatomic) BOOL clippingIsRestarted;

+ (id)deviceContextWithDriver:(id)a0;

- (void)setPath:(id)a0;
- (id)initWithDriver:(id)a0;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMiterLimit:(double)a0;
- (void)setTextDirection:(int)a0;
- (int)getArcDirection;
- (id)getFont;
- (id)getPath;
- (void)setPenPosition:(struct CGPoint { double x0; double x1; })a0;
- (int)getPolyFillMode;
- (int)getRop2;
- (BOOL)getTextUpdateCP;
- (void)setPen:(id)a0;
- (id)getBkColour;
- (int)getBkMode;
- (id)getBrush;
- (struct CGPoint { double x0; double x1; })getBrushOrg;
- (id)getCurrentTransform;
- (double)getMiterLimit;
- (id)getPen;
- (struct CGPoint { double x0; double x1; })getPenPosition;
- (id)getSelectedPalette;
- (int)getStretchBltMode;
- (int)getTextBreakCount;
- (int)getTextBreakExtra;
- (int)getTextCharExtra;
- (id)getTextColour;
- (int)getTextDirection;
- (int)getTextHorizontalAlign;
- (int)getTextVerticalAlign;
- (void)setArcDirection:(int)a0;
- (void)setBkColour:(id)a0;
- (void)setBkMode:(int)a0;
- (void)setBrush:(id)a0;
- (void)setBrushOrg:(struct CGPoint { double x0; double x1; })a0;
- (void)setCurrentTransform:(id)a0;
- (void)setPolyFillMode:(int)a0;
- (void)setRop2:(int)a0;
- (void)setSelectedPalette:(id)a0;
- (void)setStretchBltMode:(int)a0;
- (void)setTextCharExtra:(int)a0;
- (void)setTextColour:(id)a0;
- (void)setTextHorizontalAlign:(int)a0;
- (void)setTextJustification:(int)a0 in_breakCount:(int)a1;
- (void)setTextUpdateCP:(BOOL)a0;
- (void)setTextVerticalAlign:(int)a0;

@end
