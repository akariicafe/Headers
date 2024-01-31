@class NSString, STActivityAttribution;

@interface STCallingStatusDomainCallDescriptor : NSObject <NSSecureCoding, BSDebugDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long callType;
@property (readonly, nonatomic) unsigned long long callState;
@property (readonly, nonatomic) unsigned long long copresenceActivityType;
@property (readonly, copy, nonatomic) STActivityAttribution *callProviderAttribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)copresenceCallDescriptorWithActivityType:(unsigned long long)a0;
+ (id)audioCallDescriptorWithState:(unsigned long long)a0;
+ (id)videoCallDescriptorWithState:(unsigned long long)a0;

- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)initWithCallType:(unsigned long long)a0 callState:(unsigned long long)a1 copresenceActivityType:(unsigned long long)a2;
- (id)initWithCallType:(unsigned long long)a0 callState:(unsigned long long)a1 copresenceActivityType:(unsigned long long)a2 callProviderAttribution:(id)a3;

@end
