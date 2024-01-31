@class NSDictionary;

@interface CRKDumpASMCredentialsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *credentials;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
