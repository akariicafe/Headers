@class NSDictionary;

@interface DMFFetchApplicationsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *applicationsByIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationsByIdentifier:(id)a0;

@end
