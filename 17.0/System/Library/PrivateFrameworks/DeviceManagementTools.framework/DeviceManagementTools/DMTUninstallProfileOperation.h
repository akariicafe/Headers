@class NSString;
@protocol DMTProfileInstallationPrimitives;

@interface DMTUninstallProfileOperation : CATOperation

@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> primitives;
@property (readonly, nonatomic) NSString *profileIdentifier;

- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProfileInstallationPrimitives:(id)a0 profileIdentifier:(id)a1;
- (void)uninstallProfile;

@end
