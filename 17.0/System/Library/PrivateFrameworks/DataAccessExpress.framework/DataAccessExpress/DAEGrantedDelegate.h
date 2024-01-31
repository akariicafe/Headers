@class NSString;

@interface DAEGrantedDelegate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *preferredUserAddress;
@property (nonatomic) long long permission;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
