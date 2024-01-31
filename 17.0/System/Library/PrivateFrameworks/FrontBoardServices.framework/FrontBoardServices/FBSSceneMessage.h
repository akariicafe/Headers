@class BSMutableKeyedSettings, NSString;

@interface FBSSceneMessage : NSObject <NSCopying, BSXPCCoding, BSDescriptionProviding>

@property (readonly, copy, nonatomic) BSMutableKeyedSettings *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)message;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (Class)fallbackXPCEncodableClass;
- (id)succinctDescriptionBuilder;
- (id)_initWithPayload:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
