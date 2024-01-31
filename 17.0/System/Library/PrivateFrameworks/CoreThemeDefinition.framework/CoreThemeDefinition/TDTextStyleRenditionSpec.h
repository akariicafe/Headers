@class NSString, TDNamedColorProduction;

@interface TDTextStyleRenditionSpec : TDRenditionSpec

@property (nonatomic) short alignment;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) float fontSize;
@property (nonatomic) float maxPointSize;
@property (nonatomic) float minPointSize;
@property (nonatomic) short scalingStyle;
@property (retain, nonatomic) TDNamedColorProduction *backgroundColor;
@property (retain, nonatomic) TDNamedColorProduction *foregroundColor;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;

@end
