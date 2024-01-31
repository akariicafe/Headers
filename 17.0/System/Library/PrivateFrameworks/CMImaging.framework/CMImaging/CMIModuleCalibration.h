@class CMIBlackLevelShadingCorrectionThumbnails, CMIShadingFPNCorrectionImage;

@interface CMIModuleCalibration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CMIShadingFPNCorrectionImage *shadingFPNCorrectionImage;
@property (retain, nonatomic) CMIShadingFPNCorrectionImage *quadraShadingFPNCorrectionImage;
@property (retain, nonatomic) CMIBlackLevelShadingCorrectionThumbnails *blacklevelShadingCorrectionThumbnails;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
