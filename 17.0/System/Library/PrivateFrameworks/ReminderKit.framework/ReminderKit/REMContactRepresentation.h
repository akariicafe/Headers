@class NSArray;

@interface REMContactRepresentation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *phones;
@property (copy, nonatomic) NSArray *emails;

+ (id)representationFromData:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)archivedData;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhones:(id)a0 emails:(id)a1;
- (BOOL)matchesContactRepresentation:(id)a0;

@end
