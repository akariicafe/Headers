@class TSCH3DResource, TSCH3DGeometryArrays, TSCH3DGeometry;

@interface TSCH3DGeometryResource : NSObject

@property (nonatomic) int type;
@property (readonly, retain, nonatomic) TSCH3DResource *resource;
@property (readonly, copy, nonatomic) TSCH3DGeometryArrays *arrays;
@property (readonly, retain, nonatomic) TSCH3DGeometry *geometry;
@property (readonly, nonatomic) BOOL hasArrays;

+ (id)resource;
+ (id)resourceWithType:(int)a0 resource:(id)a1;
+ (id)resourceWithType:(int)a0 resource:(id)a1 arrays:(id)a2 geometry:(id)a3;

- (void).cxx_destruct;
- (id)initWithType:(int)a0 resource:(id)a1;
- (id)initWithType:(int)a0 resource:(id)a1 arrays:(id)a2 geometry:(id)a3;
- (void)submitCapWithProcessor:(id)a0;
- (void)submitNoneWithProcessor:(id)a0;
- (void)submitToProcessor:(id)a0 withPortion:(int)a1;
- (void)submitWithProcessor:(id)a0;

@end
