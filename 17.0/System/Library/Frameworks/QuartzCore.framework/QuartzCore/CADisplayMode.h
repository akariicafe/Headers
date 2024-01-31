@class NSString;

@interface CADisplayMode : NSObject {
    struct CADisplayModePriv { struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 25; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; } x0; id x1; unsigned long long x2; unsigned long long x3; unsigned int x4; id x5; } *_priv;
}

@property (readonly, nonatomic) unsigned long long width;
@property (readonly, nonatomic) unsigned long long height;
@property (readonly, nonatomic) double pixelAspectRatio;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) BOOL isVirtual;
@property (readonly, nonatomic, getter=isHighBandwidth) BOOL highBandwidth;
@property (readonly, copy, nonatomic) NSString *colorMode;
@property (readonly, nonatomic) BOOL colorModeIsYCbCr;
@property (readonly, nonatomic) unsigned long long preferredScale;
@property (readonly, copy, nonatomic) NSString *hdrMode;
@property (readonly, copy, nonatomic) NSString *colorGamut;
@property (readonly, nonatomic) unsigned long long bitDepth;
@property (readonly, nonatomic) BOOL isVRR;
@property (readonly, nonatomic) unsigned long long internalRepresentation;

+ (id)displayModeWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 refreshRate:(double)a2 isVRR:(BOOL)a3;
+ (id)_displayModeWithMode:(struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 25; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; })a0 display:(id)a1 rates:(id)a2;
+ (id)displayModeWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 refreshRate:(double)a2;

- (id)_display;
- (struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 25; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; })_mode;
- (unsigned long long)hash;
- (id)_initWithMode:(struct Mode { union { struct { unsigned short x0 : 14; unsigned short x1 : 14; unsigned char x2 : 1; unsigned int x3 : 25; unsigned char x4 : 1; unsigned char x5 : 5; unsigned char x6 : 2; unsigned char x7 : 1; unsigned char x8 : 1; } x0; unsigned long long x1; } x0; })a0 display:(id)a1 rates:(id)a2;
- (void)dealloc;
- (id)description;
- (void)_setWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)_setPreferredUIScale:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;

@end
