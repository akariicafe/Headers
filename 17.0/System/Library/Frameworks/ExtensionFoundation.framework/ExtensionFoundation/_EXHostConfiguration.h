@class _EXPersona, _EXLaunchConfiguration, NSArray, NSDictionary, NSString, _EXExtensionInstanceIdentifier, _EXExtensionIdentity;
@protocol _EXExtensionRepresenting;

@interface _EXHostConfiguration : NSObject <NSCopying>

@property (retain) _EXLaunchConfiguration *launchConfiguration;
@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (copy) id /* block */ interruptionHandler;
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) NSArray *preferredLanguages;
@property (copy) NSDictionary *additionalEnvironmentVariables;
@property (copy) NSString *sandboxProfileName;
@property (copy) _EXPersona *launchPersona;

- (id)initWithExtension:(id)a0;
- (id)launchConfiguration;
- (id)description;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 instanceIdentifier:(id)a1;
- (id)initWithExtensionIdentity:(id)a0;
- (id)initWithExtensionIdentity:(id)a0 instanceIdentifier:(id)a1;
- (id)rbsProcessIdentity;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
