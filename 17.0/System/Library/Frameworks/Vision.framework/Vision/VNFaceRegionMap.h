@class NSArray, NSDictionary;

@interface VNFaceRegionMap : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {
    unsigned long long _requestRevision;
    struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } _regionMap;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _userBBox;
    struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x; float y; } origin; struct _Geometry2D_size2D_ { float height; float width; } size; } _internalAlignedBBox;
    BOOL _deallocateBuffer;
    NSDictionary *_pixelValueToRegionLabelMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *regionLabels;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)getRegionLabels;
- (id)initWithRequestRevision:(unsigned long long)a0 regionMap:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 deallocateBuffer:(BOOL)a2 userBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x0; float x1; } x0; struct _Geometry2D_size2D_ { float x0; float x1; } x1; })a4 valueToLabelMap:(id)a5;
- (id)regionNameAtImageCoordinate:(struct CGPoint { double x0; double x1; })a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (id)regionNameAtNormalizedAlignedFaceCoordinate:(struct CGPoint { double x0; double x1; })a0;
- (id)regionNameAtNormalizedFaceCoordinate:(struct CGPoint { double x0; double x1; })a0;

@end
