@class NSDictionary, NSString, NSSet;

@interface SelectedCheckboxFromIcon__generated__Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSDictionary *labelProbability;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithLabelProbability:(id)a0 label:(id)a1;

@end
