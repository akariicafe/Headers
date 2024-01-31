@class NSString, BSSettings, _BSActionResponder;

@interface BSAction : NSObject <BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDebugDescriptionProviding, BSInvalidatable> {
    _BSActionResponder *_responder;
    BOOL _isImplicitOriginator;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_expectsResponse) BOOL expectsResponse;
@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)sendResponse:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithInfo:(id)a0 timeout:(double)a1 forResponseOnQueue:(id)a2 withHandler:(id /* block */)a3;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (void)invalidate;
- (void)sendResponse:(id)a0 withCompletion:(id /* block */)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isValid;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)setNullificationHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (BOOL)canSendResponse;
- (id)initWithInfo:(id)a0 responder:(id)a1;

@end
