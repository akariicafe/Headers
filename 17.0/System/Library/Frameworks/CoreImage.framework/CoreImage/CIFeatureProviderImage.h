@class NSString, NSSet;

@interface CIFeatureProviderImage : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct __CVBuffer { } *buffer;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithName:(id)a0 buffer:(struct __CVBuffer { } *)a1;

@end
