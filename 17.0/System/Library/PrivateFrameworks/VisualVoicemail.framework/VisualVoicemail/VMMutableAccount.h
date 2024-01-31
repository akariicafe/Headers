@class NSUUID, NSString, VMHandle;

@interface VMMutableAccount : VMAccount

@property (retain, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *abbreviatedAccountDescription;
@property (retain, nonatomic) VMHandle *handle;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (nonatomic, getter=isProvisioned) BOOL provisioned;
@property (copy, nonatomic) NSString *serviceName;


@end
