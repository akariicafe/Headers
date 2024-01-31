@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding> {
    float _sampleRadiusX;
    float _sampleRadiusY;
    void *_dominanceGrid;
    void *_path;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int cellGridWidth;
@property (readonly, nonatomic) int cellGridHeight;
@property (readonly, nonatomic) int pathLength;
@property (readonly, nonatomic) float startRotation;

+ (id)pathfinderFromDirectory:(id)a0;
+ (id)pathfinderFromFile:(id)a0;
+ (id)pathfinderWithImage:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (BOOL)writeToFile:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)writeToDirectory:(id)a0;
- (void)adjustPathStart:(SEL)a0;
- (void)adjustRotationStart:(float)a0;
- (void)adjustSampleRadius:(float)a0;
- (struct NTKKaleidoscopePathfinderPoint { double x0[4]; })pointForTime:(float)a0;

@end
