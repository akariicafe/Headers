@class NSNumber, WFImage;

@interface WFSliderParameter : WFParameter

@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) WFImage *minimumIcon;
@property (readonly, nonatomic) WFImage *maximumIcon;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)localizedLabelWithState:(id)a0;
- (BOOL)shouldAlignLabels;
- (Class)singleStateClass;

@end
