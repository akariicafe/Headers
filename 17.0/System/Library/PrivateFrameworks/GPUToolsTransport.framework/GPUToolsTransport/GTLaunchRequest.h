@class NSArray, NSDictionary, NSString, NSUUID;

@interface GTLaunchRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *environment;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSString *deviceUDID;
@property (copy, nonatomic) NSUUID *sessionUUID;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
