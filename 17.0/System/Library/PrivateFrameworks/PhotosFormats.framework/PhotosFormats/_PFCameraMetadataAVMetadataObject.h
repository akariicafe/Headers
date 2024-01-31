@class NSString;

@interface _PFCameraMetadataAVMetadataObject : NSObject

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (readonly) NSString *type;
@property (readonly) int confidence;

+ (id)catBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0;
+ (id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0;
+ (id)humanBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0;
+ (id)humanFaceObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0;
+ (id)objectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0 type:(id)a1;
+ (id)salientObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 confidence:(int)a2;

@end
