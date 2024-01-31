@interface VKIconImage : NSObject {
    struct shared_ptr<grl::IconImage> { struct IconImage *__ptr_; struct __shared_weak_count *__cntrl_; } _iconImage;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _fillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _haloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _glyphColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutFillColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutHaloColor;
    struct _retain_ptr<CGColor *, geo::_retain_cf<CGColor *>, geo::_release_cf, geo::_hash_cf, geo::_equal_cf> { void /* function */ **_vptr$_retain_ptr; struct CGColor *_obj; struct _retain_cf<CGColor *> { } _retain; struct _release_cf { } _release; } _calloutTextColor;
}

- (id)init:(struct shared_ptr<grl::IconImage> { struct IconImage *x0; struct __shared_weak_count *x1; })a0;
- (float)opacity;
- (struct CGSize { double x0; double x1; })imageSize;
- (struct CGColor { } *)fillColor;
- (struct CGImage { } *)image;
- (BOOL)isBalloonShape;
- (unsigned int)calloutShape;
- (float)contentScale;
- (struct CGColor { } *)glyphColor;
- (id).cxx_construct;
- (struct CGColor { } *)calloutFillColor;
- (struct CGColor { } *)calloutHaloColor;
- (struct CGColor { } *)haloColor;
- (void).cxx_destruct;
- (struct CGColor { } *)calloutTextColor;

@end
