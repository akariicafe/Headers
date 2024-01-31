@class NSString, _EXExtensionIdentity;
@protocol _EXExtensionConfigurationProviding;

@interface _EXExtension : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) id<_EXExtensionConfigurationProviding> configuration;
@property BOOL hasSwiftEntryPoint;
@property (retain, nonatomic) _EXExtensionIdentity *internalRep;
@property (retain, nonatomic) id strongDelegate;
@property (readonly) struct { unsigned int x0[8]; } hostAuditToken;
@property (readonly) Class delegateClass;
@property (weak, nonatomic) id delegate;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void)willFinishLaunching;
- (void)didFinishLaunching;
- (BOOL)loadDelegate;
- (Class)delegateClass;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (id)configuration;
- (void)prepareForSceneConnectionWithConfiguration:(id)a0;

@end
