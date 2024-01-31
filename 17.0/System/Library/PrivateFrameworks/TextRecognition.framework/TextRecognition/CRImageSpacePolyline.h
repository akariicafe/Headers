@class NSString, NSArray;

@interface CRImageSpacePolyline : NSObject <CRCodable, CRPolyline> {
    void *__points;
    struct ObjectRef<const CGPath *> { struct CGPath *mCFObject; } __pathRef;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) struct CGPath { } *path;
@property (readonly) NSArray *pointValues;
@property (readonly) unsigned long long pointCount;

- (id)init;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRect;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPolyline:(id)a0;
- (id)initWithPoints:(struct CGPoint { double x0; double x1; } *)a0 count:(unsigned long long)a1;
- (id)crCodableDataRepresentation;
- (void)enumeratePoints:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })estimatedLineSizeForPairedPointPolygon;
- (id)initWithCRCodableDataRepresentation:(id)a0;
- (id)initWithPointValues:(id)a0;
- (id)polylineByAppendingPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)polylineByAppendingPolyline:(id)a0;
- (id)rotated180;
- (id)simplified;

@end
