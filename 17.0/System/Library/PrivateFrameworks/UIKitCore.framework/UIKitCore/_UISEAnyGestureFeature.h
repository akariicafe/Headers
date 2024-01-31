@class NSArray, NSString;

@interface _UISEAnyGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate>

@property (readonly, nonatomic) NSArray *subfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSubfeatures:(id)a0;
- (void)featureDidChangeState:(id)a0;
- (id)debugDictionary;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { } *)a0;
- (void).cxx_destruct;

@end
