@class NSString;

@interface _EAEmailAddress : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *rawAddress;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
