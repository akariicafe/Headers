@class MTLRenderPassDescriptor;

@interface SCNRendererViewPoint : NSObject {
    MTLRenderPassDescriptor *_passDescriptor;
    struct { double originX; double originY; double width; double height; double znear; double zfar; } _viewport;
}

@property (nonatomic) struct SCNMatrix4 { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } viewMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } simdViewMatrix;
@property (nonatomic) struct SCNMatrix4 { float m11; float m12; float m13; float m14; float m21; float m22; float m23; float m24; float m31; float m32; float m33; float m34; float m41; float m42; float m43; float m44; } projectionMatrix;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } simdProjectionMatrix;
@property (retain, nonatomic) MTLRenderPassDescriptor *passDescriptor;
@property (nonatomic) struct { double x0; double x1; double x2; double x3; double x4; double x5; } viewport;

- (void)dealloc;

@end
