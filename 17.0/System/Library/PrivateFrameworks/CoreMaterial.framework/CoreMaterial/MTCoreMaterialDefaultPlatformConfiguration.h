@class NSURL, NSString;

@interface MTCoreMaterialDefaultPlatformConfiguration : NSObject <MTCoreMaterialPlatformConfiguring>

@property (copy, nonatomic) NSURL *overrideRecipeBundleURL;
@property (readonly, copy, nonatomic) NSString *blurEdgesOptimization;
@property (readonly, nonatomic, getter=isDitherOptimizationSupported) BOOL ditherOptimizationSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
