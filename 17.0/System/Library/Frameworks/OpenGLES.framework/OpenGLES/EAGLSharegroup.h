@class NSString;

@interface EAGLSharegroup : NSObject {
    struct _EAGLSharegroupPrivate { unsigned long long x0; int x1; BOOL x2; struct __GLDPixelFormatRec *x3; struct __GLISharedRec *x4; } *_private;
}

@property (copy, nonatomic) NSString *debugLabel;

- (id)init;
- (void)dealloc;
- (id)initWithAPI:(unsigned long long)a0;
- (unsigned long long)APIs;
- (struct __GLISharedRec { } *)getGLIShared;
- (id)initWithAPI:(unsigned long long)a0 sharedWithCompute:(BOOL)a1;
- (void)loadGLIPlugin:(struct __GLDPixelFormatRec { struct __GLDPixelFormatRec *x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; short x8; short x9; short x10; short x11; unsigned int x12; unsigned char x13; unsigned char x14; unsigned char x15; unsigned char x16; unsigned int x17; } *)a0 sharedWithCompute:(BOOL)a1;

@end
