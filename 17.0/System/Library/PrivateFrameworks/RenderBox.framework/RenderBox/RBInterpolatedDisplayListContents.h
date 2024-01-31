@class NSString, RBDisplayListInterpolator;
@protocol _RBDisplayListContents;

@interface RBInterpolatedDisplayListContents : NSObject <_RBDisplayListContents> {
    struct objc_ptr<RBDisplayListInterpolator *> { RBDisplayListInterpolator *_p; } _interp;
    float _progress;
    struct spin_lock { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock; } _contents_lock;
    struct objc_ptr<id<_RBDisplayListContents>> { id<_RBDisplayListContents> _p; } _contents;
    double _contentsScale;
}

@property (readonly, nonatomic) const void *_rb_contents;
@property (readonly, nonatomic) const void *_rb_xml_document;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingRect;
@property (readonly, copy, nonatomic) NSString *xmlDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedObjectWithData:(id)a0 delegate:(id)a1 error:(id *)a2;

- (void)renderInContext:(struct CGContext { } *)a0 options:(id)a1;
- (void)_drawInState:(struct _RBDrawingState { } *)a0 alpha:(float)a1;
- (id)encodedDataForDelegate:(id)a0 error:(id *)a1;
- (void)drawInState:(struct _RBDrawingState { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
