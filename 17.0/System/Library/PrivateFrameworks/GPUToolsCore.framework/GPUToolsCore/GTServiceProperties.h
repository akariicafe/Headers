@class NSString, NSArray;

@interface GTServiceProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) NSArray *protocolMethods;
@property (copy, nonatomic) NSString *deviceUDID;
@property (nonatomic) unsigned long long servicePort;
@property (nonatomic) int platform;
@property (nonatomic) unsigned long long version;

+ (id)protocolMethods:(id)a0;

- (id)initWithProtocol:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
