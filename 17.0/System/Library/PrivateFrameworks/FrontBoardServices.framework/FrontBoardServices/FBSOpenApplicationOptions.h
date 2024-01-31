@class NSURL, NSMutableDictionary, NSString;

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, BSXPCSecureCoding, NSCopying>

@property (copy, nonatomic) NSMutableDictionary *dictionary;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)optionsWithDictionary:(id)a0;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithBSXPCCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)_updateOption:(id)a0 forKey:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (void)_sanitizeAndValidatePayload;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
