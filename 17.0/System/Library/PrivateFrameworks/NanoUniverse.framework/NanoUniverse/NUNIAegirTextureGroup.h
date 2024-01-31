@class NSArray, CLKUITexture;

@interface NUNIAegirTextureGroup : NSObject

@property (retain, nonatomic) NSArray *albedos;
@property (retain, nonatomic) NSArray *normals;
@property (retain, nonatomic) NSArray *emissives;
@property (retain, nonatomic) NSArray *cloudsLo;
@property (retain, nonatomic) NSArray *cloudsMd;
@property (retain, nonatomic) NSArray *cloudsHi;
@property (retain, nonatomic) NSArray *gradients;
@property (retain, nonatomic) CLKUITexture *starfield;

- (void).cxx_destruct;

@end
