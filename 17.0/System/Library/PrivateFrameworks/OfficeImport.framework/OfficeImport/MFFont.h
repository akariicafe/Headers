@class NSString;

@interface MFFont : NSObject <MFObject> {
    int m_lfHeight;
    int m_lfWidth;
    int m_lfEscapement;
    int m_lfOrientation;
    int m_lfWeight;
    BOOL m_lfItalic;
    BOOL m_lfUnderline;
    BOOL m_lfStrikeOut;
    int m_lfCharSet;
    int m_lfOutPrecision;
    unsigned char m_lfClipPrecision;
    int m_lfQuality;
    int m_pitch;
    int m_family;
    NSString *m_lfFaceName;
    NSString *m_elfFullName;
    NSString *m_elfStyle;
    unsigned int m_elfVersion;
    unsigned int m_elfStyleSize;
    unsigned int m_elfMatch;
    unsigned int m_elfVendorId;
    unsigned int m_elfCulture;
}

+ (id)fontWithExtendedFeatures:(int)a0 lfWidth:(int)a1 lfEscapement:(int)a2 lfOrientation:(int)a3 lfWeight:(int)a4 lfItalic:(BOOL)a5 lfUnderline:(BOOL)a6 lfStrikeOut:(BOOL)a7 lfCharSet:(int)a8 lfOutPrecision:(int)a9 lfClipPrecision:(unsigned char)a10 lfQuality:(int)a11 pitch:(int)a12 family:(int)a13 lfFaceName:(id)a14 elfFullName:(id)a15 elfStyle:(id)a16 elfVersion:(unsigned int)a17 elfStyleSize:(unsigned int)a18 elfMatch:(unsigned int)a19 elfVendorId:(unsigned int)a20 elfCulture:(unsigned int)a21;
+ (id)fontWithFeatures:(int)a0 lfWidth:(int)a1 lfEscapement:(int)a2 lfOrientation:(int)a3 lfWeight:(int)a4 lfItalic:(BOOL)a5 lfUnderline:(BOOL)a6 lfStrikeOut:(BOOL)a7 lfCharSet:(int)a8 lfOutPrecision:(int)a9 lfClipPrecision:(unsigned char)a10 lfQuality:(int)a11 pitch:(int)a12 family:(int)a13 lfFaceName:(id)a14;
+ (id)fontWithStockFont:(int)a0;

- (void).cxx_destruct;
- (BOOL)underline;
- (id)faceName;
- (double)escapement;
- (double)fontHeight;
- (int)getCharset;
- (id)initWithAllFeatures:(int)a0 lfWidth:(int)a1 lfEscapement:(int)a2 lfOrientation:(int)a3 lfWeight:(int)a4 lfItalic:(BOOL)a5 lfUnderline:(BOOL)a6 lfStrikeOut:(BOOL)a7 lfCharSet:(int)a8 lfOutPrecision:(int)a9 lfClipPrecision:(unsigned char)a10 lfQuality:(int)a11 pitch:(int)a12 family:(int)a13 lfFaceName:(id)a14 elfFullName:(id)a15 elfStyle:(id)a16 elfVersion:(unsigned int)a17 elfStyleSize:(unsigned int)a18 elfMatch:(unsigned int)a19 elfVendorId:(unsigned int)a20 elfCulture:(unsigned int)a21;
- (id)initWithFeatures:(int)a0 lfWidth:(int)a1 lfEscapement:(int)a2 lfOrientation:(int)a3 lfWeight:(int)a4 lfItalic:(BOOL)a5 lfUnderline:(BOOL)a6 lfStrikeOut:(BOOL)a7 lfCharSet:(int)a8 lfOutPrecision:(int)a9 lfClipPrecision:(unsigned char)a10 lfQuality:(int)a11 pitch:(int)a12 family:(int)a13 lfFaceName:(id)a14;
- (id)initWithStockFont:(int)a0;
- (int)selectInto:(id)a0;
- (BOOL)strikeout;
- (id)stringWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textExtent:(id)a0 options:(int)a1 in_spacingValues:(int *)a2 in_count:(int)a3;

@end
