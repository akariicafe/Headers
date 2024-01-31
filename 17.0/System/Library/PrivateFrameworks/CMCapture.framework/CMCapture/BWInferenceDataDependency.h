@class BWInferenceRequirement, BWInferenceDataRequirement;

@interface BWInferenceDataDependency : NSObject

@property (readonly, nonatomic) BWInferenceDataRequirement *dataRequirement;
@property (readonly, nonatomic) BWInferenceRequirement *inferenceRequirement;

- (void)dealloc;
- (id)initWithInferenceRequirement:(id)a0 dependentOnDataRequirement:(id)a1;

@end
