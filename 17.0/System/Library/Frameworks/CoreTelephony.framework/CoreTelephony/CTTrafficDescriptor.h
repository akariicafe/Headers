@class NSString, NSNumber;

@interface CTTrafficDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *appCategory;
@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSNumber *portRangeLow;
@property (retain, nonatomic) NSNumber *portRangeUpper;
@property (retain, nonatomic) NSNumber *ipProtocol;
@property (retain, nonatomic) NSNumber *trafficClass;
@property (retain, nonatomic) NSString *dnn;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
