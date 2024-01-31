@class NSDate;

@interface NFAssertion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long assertionType;
@property (readonly) int pid;
@property (readonly) NSDate *assertionTime;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)sessionID;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
