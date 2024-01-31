@interface WBShading : NSObject

+ (struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })fixedUpVersionOfColor:(struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })a0;
+ (void)readFrom:(struct WrdShading { void /* function */ **x0; int x1; BOOL x2; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x3; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x4; BOOL x5; int x6; int x7; } *)a0 to:(id)a1;
+ (void)setToSolidWhite:(id)a0;
+ (void)write:(id)a0 to:(struct WrdShading { void /* function */ **x0; int x1; BOOL x2; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x3; struct CsColour { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } x4; BOOL x5; int x6; int x7; } *)a1;

@end
