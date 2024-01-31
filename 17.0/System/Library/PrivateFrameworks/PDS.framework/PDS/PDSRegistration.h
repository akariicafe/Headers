@class NSString;

@interface PDSRegistration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *topicString;
@property (readonly, nonatomic) NSString *qualifierString;
@property (readonly, nonatomic) char pushEnvironment;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithTopic:(id)a0 qualifier:(id)a1 pushEnvironment:(char)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTopic:(id)a0 pushEnvironment:(char)a1;
- (BOOL)isEqualToRegistration:(id)a0;
- (id)initWithCoder:(id)a0;

@end
