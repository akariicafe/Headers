@class NSDictionary;

@interface CRKDumpIDSInfoResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *info;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)initWithCoder:(id)a0;

@end
