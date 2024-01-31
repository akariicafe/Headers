@class NSString, NSURL;

@interface DOTRenderer : NSObject <CIGVRenderer> {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *file;
    NSURL *fileURL;
    NSString *fileTitle;
}

@property int direction;
@property struct CGSize { double width; double height; } separation;
@property BOOL drawEdgesFirst;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFileURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void)drawEdge:(id)a0 withPath:(id)a1;
- (void)drawNode:(id)a0;
- (void)flushRender;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)setFileTitle:(id)a0;

@end
