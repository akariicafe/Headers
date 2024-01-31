@class NSString;

@interface MSUserAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *homeUserID;
@property (readonly, copy, nonatomic) NSString *sharedUserID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHomeUserID:(id)a0 sharedUserID:(id)a1;

@end
