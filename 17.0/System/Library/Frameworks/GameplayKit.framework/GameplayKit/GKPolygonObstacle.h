@interface GKPolygonObstacle : GKObstacle <NSSecureCoding> {
    void *_cPolygonObstacle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long vertexCount;

+ (id)obstacleWithPoints:(void *)a0 count:(unsigned long long)a1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void /* unknown type, empty encoding */)vertexAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPoints:(void *)a0 count:(unsigned long long)a1;
- (void *)cPolygonObstacle;
- (struct Obstacle { void /* function */ **x0; } *)obstacle;
- (void)setCPolygonObstacle:(void *)a0;

@end
