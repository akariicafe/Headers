@class NSDictionary, NSString;

@interface _PFStoryRecipeDisplayAssetNormalizationDataV1 : NSObject <_PFStoryRecipeDisplayAssetNormalizationData> {
    struct { unsigned char version; unsigned char score; unsigned char tempTintInputTemperature; unsigned char tempTintInputTint; unsigned char smartToneInputContrast; unsigned char smartToneInputBlack; unsigned char smartToneInputExposure; unsigned char smartToneInputHighlights; unsigned char highKeyInputStrength; unsigned char smartColorInputVibrancy; unsigned char smartColorInputCast; unsigned char unused; } _data;
}

@property (class, readonly, nonatomic) NSDictionary *limits;

@property (readonly, nonatomic) const struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; } *sliderNetPackedData;
@property (readonly, nonatomic) long long version;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) NSDictionary *tempTintProperties;
@property (readonly, nonatomic) NSDictionary *smartToneProperties;
@property (readonly, nonatomic) NSDictionary *highKeyProperties;
@property (readonly, nonatomic) NSDictionary *smartColorProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)initWithSliderNetPackedDataV1:(const struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; } *)a0;

@end
