@class NSSet;

@interface SelectedCheckboxFromIcon__generated__Input : NSObject <MLFeatureProvider>

@property (nonatomic) struct __CVBuffer { } *image;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithImage:(struct __CVBuffer { } *)a0;
- (id)featureValueForName:(id)a0;

@end
