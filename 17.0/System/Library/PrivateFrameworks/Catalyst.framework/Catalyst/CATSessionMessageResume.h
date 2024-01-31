@class NSUUID, NSDictionary;

@interface CATSessionMessageResume : CATSessionMessage

@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *clientUserInfo;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionUUID:(id)a0;

@end
