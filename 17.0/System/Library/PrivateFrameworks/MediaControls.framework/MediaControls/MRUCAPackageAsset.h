@class CAPackage, CCUICAPackageDescription, NSString;

@interface MRUCAPackageAsset : NSObject

@property (readonly, nonatomic) CAPackage *package;
@property (readonly, nonatomic) CCUICAPackageDescription *packageDescription;
@property (readonly, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *glyphState;
@property (nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } permanentTransform;

+ (id)packageNamed:(id)a0;
+ (id)packageNamed:(id)a0 glyphState:(id)a1;
+ (id)packageNamed:(id)a0 glyphState:(id)a1 permanentTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPackageName:(id)a0 glyphState:(id)a1;
- (id)initWithPackageName:(id)a0;
- (id)initWithPackageName:(id)a0 glyphState:(id)a1 permanentTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a2;

@end
