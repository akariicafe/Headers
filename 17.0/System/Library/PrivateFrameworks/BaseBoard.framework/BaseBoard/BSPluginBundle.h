@class NSString, NSBundle;

@interface BSPluginBundle : NSObject <BSDescriptionProviding> {
    NSBundle *_bundle;
    NSString *_specifiedClassName;
    NSString *_requiredClassOrProtocolName;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, nonatomic) Class principalClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (BOOL)loadPlugin:(id /* block */)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (BOOL)loadPlugin;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
