@class NSNumber, CTIPFilterEndpoint;

@interface CTIPFilter : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long filterId;
@property (nonatomic) unsigned long long precedence;
@property (readonly, nonatomic) BOOL isTcp;
@property (readonly, nonatomic) BOOL isUdp;
@property (readonly, nonatomic) BOOL isAnyIpProtocol;
@property (readonly, nonatomic) BOOL isIpv4;
@property (readonly, nonatomic) BOOL isIpv6;
@property (readonly, nonatomic) BOOL isAnyIpFamilyProtocol;
@property (nonatomic) unsigned long long ipProtocol;
@property (nonatomic) unsigned long long ipFamilyProtocol;
@property (retain, nonatomic) CTIPFilterEndpoint *src;
@property (retain, nonatomic) CTIPFilterEndpoint *dst;
@property (retain, nonatomic) NSNumber *tos;
@property (retain, nonatomic) NSNumber *tosMask;
@property (retain, nonatomic) NSNumber *flowLabel;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
