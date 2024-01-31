@interface MKJunction : NSObject <NSSecureCoding> {
    struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_elements;
    unsigned long long _count;
    int _maneuver;
    int _drivingSide;
    struct GEOJunctionElement *_snapped[8];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int type;

- (unsigned long long)hash;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_addJunctionStemCapToPath:(id)a0 fromStartPoint:(struct CGPoint { double x0; double x1; })a1 topEndPoint:(struct CGPoint { double x0; double x1; })a2 cornerRadius:(double)a3;
- (BOOL)_willSnapToNinetyDegreesForManeuverTypes:(id)a0;
- (void)getArrowPath:(id *)a0 arrowStrokePath:(id *)a1 intersectionBackgroundPath:(id *)a2 strokePath:(id *)a3 withSize:(struct CGSize { double x0; double x1; })a4 metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })a5 drivingSide:(int)a6 visualCenter:(struct CGPoint { double x0; double x1; } *)a7;
- (void)getArrowPath:(id *)a0 arrowStrokePath:(id *)a1 pivot:(struct CGPoint { double x0; double x1; } *)a2 withSize:(struct CGSize { double x0; double x1; })a3 metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })a4 visualCenter:(struct CGPoint { double x0; double x1; } *)a5;
- (void)getRoundaboutArrowPath:(id *)a0 intersectionBackgroundPath:(id *)a1 strokePath:(id *)a2 withSize:(struct CGSize { double x0; double x1; })a3 metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })a4 drivingSide:(int)a5 visualCenter:(struct CGPoint { double x0; double x1; } *)a6;
- (id)initWithJunction:(id)a0;
- (id)initWithType:(int)a0 maneuver:(int)a1 drivingSide:(int)a2 elements:(struct GEOJunctionElement { int x0; int x1; int x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a3 count:(unsigned long long)a4;
- (BOOL)rightOrLeftTurnWillSnapToNinetyDegrees;
- (id)roundaboutArrowWithSize:(struct CGSize { double x0; double x1; })a0 metrics:(struct { BOOL x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; struct CGSize { double x0; double x1; } x5; double x6; double x7; double x8; double x9; double x10; double x11; long long x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; double x32; double x33; double x34; BOOL x35; double x36; double x37; double x38; double x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; double x44; double x45; double x46; double x47; double x48; double x49; double x50; double x51; double x52; double x53; double x54; double x55; double x56; double x57; double x58; double x59; double x60; double x61; double x62; })a1 outerRadius:(double)a2 endAngle:(double)a3 pivot:(struct CGPoint { double x0; double x1; } *)a4;
- (BOOL)willSnapToRightHandTurn;
- (BOOL)willSnapToSharpRight;

@end
