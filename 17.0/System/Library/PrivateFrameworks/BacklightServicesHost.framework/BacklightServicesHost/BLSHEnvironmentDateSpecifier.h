@class NSString, BLSAlwaysOnDateSpecifier;
@protocol BLSHBacklightSceneHostEnvironment;

@interface BLSHEnvironmentDateSpecifier : NSObject <BLSEnvironmentDateSpecifying>

@property (readonly, nonatomic) BLSAlwaysOnDateSpecifier *dateSpecifier;
@property (readonly, nonatomic) id<BLSHBacklightSceneHostEnvironment> environment;
@property (readonly, nonatomic) id userObject;
@property (readonly, copy, nonatomic) NSString *environmentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifierWithPresentationDate:(id)a0 fidelity:(long long)a1 environment:(id)a2;
+ (id)specifierWithPresentationDate:(id)a0 fidelity:(long long)a1 environment:(id)a2 userObject:(id)a3;

- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPresentationDate:(id)a0 fidelity:(long long)a1 environment:(id)a2 userObject:(id)a3;

@end
