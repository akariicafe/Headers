@class TSCH3DGeometry, TSCH3DTexCoordGeneration;

@interface TSCH3DMeshData : NSObject

@property (readonly, retain, nonatomic) TSCH3DGeometry *geometry;
@property (readonly, retain, nonatomic) TSCH3DTexCoordGeneration *texcoordGenerator;

+ (id)dataWithGeometry:(id)a0 texcoordGenerator:(id)a1;

- (void).cxx_destruct;
- (id)initWithGeometry:(id)a0 texcoordGenerator:(id)a1;

@end
