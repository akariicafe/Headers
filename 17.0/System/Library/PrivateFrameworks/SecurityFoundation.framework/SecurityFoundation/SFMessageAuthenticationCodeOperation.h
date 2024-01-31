@class NSString, _SFKeySpecifier;

@interface SFMessageAuthenticationCodeOperation : NSObject <SFSigningOperation> {
    id _messageAuthenticationCodeOperationInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) _SFKeySpecifier *signingKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultMacOperation;

- (id)init;
- (id)verify:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)sign:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
