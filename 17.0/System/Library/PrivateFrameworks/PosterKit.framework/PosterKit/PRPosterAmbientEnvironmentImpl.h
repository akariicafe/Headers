@class NSString, UITraitCollection;

@interface PRPosterAmbientEnvironmentImpl : NSObject <PRPosterAmbientEnvironment>

@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (readonly, nonatomic, getter=isAmbientPresented) BOOL ambientPresented;
@property (readonly, nonatomic, getter=isDisplayStyleRedMode) BOOL displayStyleRedMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTraitCollection:(id)a0;
- (void).cxx_destruct;

@end
