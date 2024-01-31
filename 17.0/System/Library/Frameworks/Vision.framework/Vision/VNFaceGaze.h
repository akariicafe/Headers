@class NSUUID, VNPixelBufferObservation, VNRequestSpecifier;

@interface VNFaceGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    VNRequestSpecifier *_originatingRequestSpecifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *faceObservationUUID;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } locationBounds;
@property (readonly, nonatomic) float horizontalAngle;
@property (readonly, nonatomic) VNPixelBufferObservation *gazeMask;
@property (readonly, nonatomic) NSUUID *lookedAtFaceObservationUUID;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFaceObservationUUID:(id)a0 direction:(long long)a1 location:(struct CGPoint { double x0; double x1; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 horizontalAngle:(float)a4 lookedAtFaceObservationUUID:(id)a5 gazeMask:(id)a6 originatingRequestSpecifier:(id)a7;
- (struct CGPoint { double x0; double x1; })locationInTopLeftOrigin:(BOOL)a0 orientation:(unsigned int)a1;

@end
