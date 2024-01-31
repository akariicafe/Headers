@class UIColor;

@interface WBSTemplateIconMonogramConfiguration : NSObject

@property (nonatomic) BOOL skipMonogramGeneration;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) double fontSize;
@property (nonatomic) long long fontWeight;
@property (nonatomic) long long fontDesign;
@property (nonatomic) double baselineOffset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (nonatomic) double cornerRadius;

+ (id)configurationWithIconSize:(struct CGSize { double x0; double x1; })a0 fontSize:(double)a1 fontWeight:(long long)a2 fontDesign:(long long)a3 baselineOffset:(double)a4 backgroundColor:(id)a5 cornerRadius:(double)a6;
+ (id)configurationWithBackgroundColor:(id)a0;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
