@class BLSHEnvironmentDateSpecifier;
@protocol BLSHBacklightSceneHostEnvironment;

@interface BLSHPresentationEntry : NSObject

@property (readonly, nonatomic) BLSHEnvironmentDateSpecifier *currentSpecifier;
@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (retain, nonatomic) id userObject;

- (unsigned long long)hash;
- (id)initWithEnvironment:(id)a0 userObject:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;

@end
