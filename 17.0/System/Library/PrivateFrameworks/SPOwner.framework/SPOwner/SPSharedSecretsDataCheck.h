@class NSArray, SPDataIntegrityCheck;

@interface SPSharedSecretsDataCheck : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SPDataIntegrityCheck *completeness;
@property (copy, nonatomic) NSArray *secrets;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCompleteness:(id)a0 secrets:(id)a1;

@end
