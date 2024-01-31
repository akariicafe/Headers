@class NSString;

@interface CRKFetchMDMIdentityResultObject : CATTaskResultObject

@property (retain, nonatomic) NSString *mdmIdentityCommonName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
