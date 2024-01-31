@class NSString, NSArray;

@interface ILMessageFilterCapabilitiesQueryResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *transactionalSubActions;
@property (copy, nonatomic) NSArray *promotionalSubActions;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCapabilitiesResponse:(id)a0;

@end
