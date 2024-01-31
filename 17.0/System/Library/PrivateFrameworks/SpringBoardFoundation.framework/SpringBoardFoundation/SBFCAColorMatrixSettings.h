@interface SBFCAColorMatrixSettings : PTSettings

@property (nonatomic) BOOL controlFirstThreeRowsTogether;
@property (nonatomic) double mx1;
@property (nonatomic) double mx2;
@property (nonatomic) double mx3;
@property (nonatomic) double mx4;
@property (nonatomic) double mx5;
@property (nonatomic) double m11;
@property (nonatomic) double m12;
@property (nonatomic) double m13;
@property (nonatomic) double m14;
@property (nonatomic) double m15;
@property (nonatomic) double m21;
@property (nonatomic) double m22;
@property (nonatomic) double m23;
@property (nonatomic) double m24;
@property (nonatomic) double m25;
@property (nonatomic) double m31;
@property (nonatomic) double m32;
@property (nonatomic) double m33;
@property (nonatomic) double m34;
@property (nonatomic) double m35;
@property (nonatomic) double m41;
@property (nonatomic) double m42;
@property (nonatomic) double m43;
@property (nonatomic) double m44;
@property (nonatomic) double m45;
@property (nonatomic) struct CAColorMatrix { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; } colorMatrix;

+ (id)settingsControllerModule;
+ (BOOL)ignoresKey:(id)a0;

- (void)setDefaultValues;
- (id)drillDownSummary;

@end
