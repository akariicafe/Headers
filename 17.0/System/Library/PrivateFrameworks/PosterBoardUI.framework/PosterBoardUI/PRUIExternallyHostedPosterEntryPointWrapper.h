@class NSString, NSUUID;
@protocol PRUIModalEntryPoint;

@interface PRUIExternallyHostedPosterEntryPointWrapper : NSObject <BSDescriptionProviding, PRUIExternallyHostedPosterEditingRequest>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) id<PRUIModalEntryPoint> entryPoint;
@property (readonly, nonatomic) NSUUID *requestUUID;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)wrapperWithEntryPoint:(id)a0;

- (id)succinctDescriptionBuilder;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithEntryPoint:(id)a0 requestUUID:(id)a1;

@end
