@class PKStroke;
@protocol PKStrokeRenderCache;

@interface PKStrokeRenderMask : NSObject <NSCopying> {
    struct vector<std::vector<ClipperLib::IntPoint>, std::allocator<std::vector<ClipperLib::IntPoint>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<ClipperLib::IntPoint> *, std::allocator<std::vector<ClipperLib::IntPoint>>> { void *__value_; } __end_cap_; } _maskPaths;
}

@property (readonly, nonatomic) PKStroke *stroke;
@property (readonly, nonatomic) id<PKStrokeRenderCache> renderCache;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStroke:(id)a0 renderCache:(id)a1 maskPaths:(const void *)a2;
- (const void *)maskPaths;

@end
