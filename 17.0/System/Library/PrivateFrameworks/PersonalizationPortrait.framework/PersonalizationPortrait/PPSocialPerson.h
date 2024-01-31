@class NSString;

@interface PPSocialPerson : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *displayName;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHandle:(id)a0 displayName:(id)a1;

@end
