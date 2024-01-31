@class ARGeometrySource, ARGeometryElement;

@interface ARMeshGeometry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ARGeometrySource *vertices;
@property (retain, nonatomic) ARGeometrySource *normals;
@property (retain, nonatomic) ARGeometryElement *faces;
@property (retain, nonatomic) ARGeometrySource *classification;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVertices:(id)a0 normals:(id)a1 faces:(id)a2;
- (id)initWithVertices:(id)a0 faces:(id)a1;

@end
