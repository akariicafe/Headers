@interface CAFlipBookFrame : NSObject {
    unsigned long long _presentationTime;
    unsigned long long _frameId;
    unsigned int _generation;
    float _apl;
    float _aplDimming;
    unsigned long long _memoryUsage;
    struct __IOSurface { } *_rawSurface;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rawSurfaceFrame;
    struct __IOSurface { } *_surface;
    id _userInfo;
    BOOL _inverted;
}

@property (readonly, nonatomic) unsigned long long presentationTime;
@property (readonly, nonatomic) unsigned long long frameId;
@property (readonly, nonatomic) id userInfo;
@property (readonly, nonatomic) float apl;
@property (readonly, nonatomic) float aplDimming;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (nonatomic) struct __IOSurface { } *rawSurface;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rawSurfaceFrame;
@property (nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic, getter=isInverted) BOOL inverted;

- (void)dealloc;
- (unsigned int)generation;
- (id)description;
- (id)_initWithPresentationTime:(unsigned long long)a0 frameId:(unsigned long long)a1 generation:(unsigned int)a2 apl:(float)a3 aplDimming:(float)a4 memoryUsage:(unsigned long long)a5 inverted:(BOOL)a6 userInfo:(id)a7;
- (void)releaseSurface;
- (void)setRawSurfaceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
