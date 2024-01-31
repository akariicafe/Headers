@class NSString, NSArray;

@interface MRStaticRouteBannerRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *routeIdentifier;
@property (retain, nonatomic) NSString *routeName;
@property (retain, nonatomic) NSArray *outputDeviceNames;
@property (retain, nonatomic) NSString *routeSymbolName;
@property (retain, nonatomic) NSString *soloModelID;
@property (retain, nonatomic) NSString *soloDeviceEnclosureColor;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
