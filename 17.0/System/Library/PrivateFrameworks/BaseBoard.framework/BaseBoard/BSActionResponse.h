@class BSAuditToken, NSString, BSSettings, NSError;

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding>

@property (readonly, copy, nonatomic) BSAuditToken *auditToken;
@property (readonly, copy, nonatomic) BSSettings *info;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)response;
+ (id)responseForError:(id)a0;
+ (id)responseWithInfo:(id)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)dealloc;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0 error:(id)a1;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
