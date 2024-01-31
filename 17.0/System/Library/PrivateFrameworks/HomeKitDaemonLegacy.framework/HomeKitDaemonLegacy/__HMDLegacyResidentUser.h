@class HMDResidentUser;

@interface __HMDLegacyResidentUser : HMDUser

@property (readonly, nonatomic) HMDResidentUser *residentUser;

+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isRemoteGateway;
- (id)initWithResidentUser:(id)a0;

@end
