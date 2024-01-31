@interface SCNGeometryWrapDeformerParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initForCreateSubclass;
- (id)initWithDriverSandwichNode0:(id)a0 driverSandwichNode1:(id)a1 deformedNode:(id)a2 mode:(unsigned long long)a3 bindingTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a4;
- (id)initWithDriverSandwichNode0:(id)a0 driverSandwichNode1:(id)a1 extraLayers:(id)a2 deformedNode:(id)a3 mode:(unsigned long long)a4 bindingTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a5;
- (id)initWithDrivingNode:(id)a0 deformedNode:(id)a1 bindingMode:(unsigned long long)a2 bindingTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 drivingNodeUVChannel:(unsigned long long)a4 deformedNodeUVChannel:(unsigned long long)a5;

@end
