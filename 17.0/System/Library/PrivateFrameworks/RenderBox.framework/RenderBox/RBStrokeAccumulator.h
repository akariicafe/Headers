@class NSString;

@interface RBStrokeAccumulator : NSObject <RBStroke, RBLineStroke, RBParticleStroke, NSCopying> {
    struct vector<RBStrokeElement, 0UL, unsigned long> { unsigned char *_p; unsigned long long _size; unsigned long long _capacity; } _elements;
    struct vector<float, 0UL, unsigned long> { float *_p; unsigned long long _size; unsigned long long _capacity; } _values;
    struct cf_ptr<CGImage *> { struct CGImage *_p; } _image;
    float _imageScale;
    unsigned long long _imageCount;
    int _strokeType;
    int _blendMode;
    int _lineCap;
    int _lineJoin;
    float _miterLimit;
    float _maxLineWidth;
    long long _seed;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    float _borderWidth;
    BOOL _hasBounds;
    BOOL _committed;
    BOOL _rotatesImage;
}

@property (nonatomic) int strokeType;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) float miterLimit;
@property (retain, nonatomic) struct CGImage { } *image;
@property (nonatomic) float imageScale;
@property (nonatomic) unsigned long long imageCount;
@property (nonatomic) BOOL rotatesImage;
@property (nonatomic) int blendMode;
@property (nonatomic) long long seed;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, nonatomic) float borderWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float maxLineWidth;

- (id)init;
- (id)commit;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addElement:(unsigned char)a0 args:(const float *)a1;
- (void)addPath:(struct CGPath { } *)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)applyFunction:(void /* function */ *)a0 info:(void *)a1;
- (void)removeAllElements;

@end
