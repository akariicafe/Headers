@class NSString, NSURL, NSArray;

@interface MSPublicDBInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *configurationPublicKey;
@property (copy, nonatomic) NSString *recordName;
@property (copy, nonatomic) NSURL *serviceIconPath;
@property (retain, nonatomic) NSArray *bundleIDS;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0 serviceID:(id)a1;

@end
