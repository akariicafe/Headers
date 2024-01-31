@class NSString, NUNIScene;

@interface NUNISpheroid : NSObject <NUNIAnimatable, NUNIRotatable> {
    struct NUNISpheroidStructure { unsigned long long type; float distance; float distanceScale; float angle; float equatorRotation; struct { void /* unknown type, empty encoding */ vector; } orientation; float opacity; float cloudOpacity; void /* unknown type, empty encoding */ colorize; float blend; float radius; float radiusScale; void /* unknown type, empty encoding */ position; void /* unknown type, empty encoding */ light; unsigned long long programType; unsigned long long spriteType; union { void /* unknown type, empty encoding */ vector; struct { float longitude; float latitude; } ; } homeCoordinate; union { void /* unknown type, empty encoding */ vector; struct { float longitude; float latitude; } ; } centerCoordinate; BOOL isVisible; BOOL isFacing; } _structure;
}

@property (readonly, weak, nonatomic) NUNIScene *scene;
@property (readonly, nonatomic) NUNISpheroid *parent;
@property (readonly, nonatomic) const struct NUNISpheroidStructure { unsigned long long x0; float x1; float x2; float x3; float x4; struct { } x5; float x6; float x7; float x8; float x9; float x10; unsigned long long x11; unsigned long long x12; union { struct { float x0; float x1; } x0; } x13; union { struct { float x0; float x1; } x0; } x14; BOOL x15; BOOL x16; } *structure;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) float distance;
@property (nonatomic) float distanceScale;
@property (nonatomic) float angle;
@property (nonatomic) float equatorRotation;
@property (nonatomic) float opacity;
@property (nonatomic) float cloudOpacity;
@property (nonatomic) void /* unknown type, empty encoding */ colorize;
@property (nonatomic) struct { } orientation;
@property (readonly, nonatomic) float blend;
@property (readonly, nonatomic) float radius;
@property (nonatomic) float radiusScale;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ position;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ light;
@property (readonly, nonatomic) unsigned long long programType;
@property (nonatomic) unsigned long long spriteType;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (nonatomic, getter=isFacing) BOOL facing;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } homeCoordinate;
@property (nonatomic) struct CLLocationCoordinate2D { double x0; double x1; } centerCoordinate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)opacity;
- (float)radius;
- (void)setOpacity:(float)a0;
- (void)setOrientation:(struct { })a0;
- (void /* unknown type, empty encoding */)position;
- (float)distance;
- (struct CLLocationCoordinate2D { double x0; double x1; })centerCoordinate;
- (void).cxx_destruct;
- (void)setDistance:(float)a0;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (struct { })orientation;
- (unsigned long long)type;
- (float)angle;
- (void)setAngle:(float)a0;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 animated:(BOOL)a1;
- (void /* unknown type, empty encoding */)light;
- (float)blend;
- (void)setRadiusScale:(float)a0;
- (float)radiusScale;
- (struct CLLocationCoordinate2D { double x0; double x1; })homeCoordinate;
- (void)setHomeCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
- (const struct NUNISpheroidStructure { unsigned long long x0; float x1; float x2; float x3; float x4; struct { } x5; float x6; float x7; float x8; float x9; float x10; unsigned long long x11; unsigned long long x12; union { struct { float x0; float x1; } x0; } x13; union { struct { float x0; float x1; } x0; } x14; BOOL x15; BOOL x16; } *)structure;
- (float)equatorRotation;
- (void)_updateCamera;
- (void)_updatePositionFromAngle;
- (void /* unknown type, empty encoding */)animatedFloatForKey:(unsigned long long)a0;
- (float)cloudOpacity;
- (void /* unknown type, empty encoding */)colorize;
- (void)date:(id)a0 toCameraPosition:(void *)a1 toCameraTarget:(void *)a2;
- (float)distanceScale;
- (id)initWithScene:(id)a0 parent:(id)a1 type:(unsigned long long)a2;
- (unsigned long long)programType;
- (void)setAnimatedFloat:(SEL)a0 forKey:(unsigned long long)a1;
- (void)setCloudOpacity:(float)a0;
- (void)setColorize:(SEL)a0;
- (void)setDistanceScale:(float)a0;
- (void)setEquatorRotation:(float)a0;
- (void)setFacing:(BOOL)a0;
- (unsigned long long)spriteType;
- (void)updateSunLocationForDate:(id)a0 lightingPreference:(unsigned long long)a1 adjustEarthRotation:(BOOL)a2;

@end
