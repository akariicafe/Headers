@class NSArray, NSDictionary;

@interface IHKFilterSequence : NSObject

@property (retain) NSArray *filterSeq;
@property (retain) NSArray *sliderOrder;
@property (retain) NSDictionary *sliderSpecs;

+ (id)breakPascalCaseIntoWords:(id)a0;
+ (id)getScalarInputsForCIFilterNamed:(id)a0;
+ (id)paramToInputName:(id)a0;
+ (id)parseFilterSequenceSpec:(id)a0;
+ (id)uiNameForCIFilter:(id)a0 paramName:(id)a1;
+ (id)uiNameForCIFilterName:(id)a0;
+ (id)uiNameForParamName:(id)a0;

- (void).cxx_destruct;
- (id)applySliders:(id)a0 image:(id)a1 error:(id *)a2;
- (id)initWithFilterSpec:(id)a0;
- (id)packageSliderValues:(id)a0;

@end
