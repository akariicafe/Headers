@class TSCH3DSession;

@interface TSCH3DRenderbufferAllocatorInfo : NSObject

@property (readonly, nonatomic) struct FramebufferAttributes { int type; long long samples; int colorDataType; int colorFormat; int depthDataType; BOOL linearFilter; BOOL discardHint; BOOL useIOSurfaceBacking; } framebufferAttributes;
@property (nonatomic) struct tvec2<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; } size;
@property (readonly, retain, nonatomic) TSCH3DSession *session;

+ (id)infoWithFramebufferAttributes:(struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; })a0 size:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a1 session:(id)a2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFramebufferAttributes:(struct FramebufferAttributes { int x0; long long x1; int x2; int x3; int x4; BOOL x5; BOOL x6; BOOL x7; })a0 size:(struct tvec2<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; })a1 session:(id)a2;

@end
