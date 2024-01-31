@class NSString, NSObject;
@protocol OS_nw_interface;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL supportsMulticast;
@property (readonly, nonatomic) BOOL hasDNS;
@property (readonly, nonatomic) BOOL hasNAT64;
@property (readonly, nonatomic, getter=isIPv4Routable) BOOL ipv4Routable;
@property (readonly, nonatomic, getter=isIPv6Routable) BOOL ipv6Routable;
@property (readonly, nonatomic) NSObject<OS_nw_interface> *cInterface;
@property (retain) NSObject<OS_nw_interface> *internalInterface;
@property (readonly, nonatomic) unsigned long long generation;
@property (readonly, nonatomic) long long mtu;
@property (readonly, nonatomic) NWInterface *delegateInterface;
@property (readonly, nonatomic) NSString *typeString;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) unsigned long long interfaceIndex;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long subtype;
@property (readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property (readonly, nonatomic, getter=isConstrained) BOOL constrained;

+ (id)descriptionForType:(long long)a0;
+ (id)descriptionForSubtype:(long long)a0;
+ (id)interfaceWithProtocolBufferData:(id)a0;

- (id)initWithInterfaceName:(id)a0;
- (BOOL)isDeepEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithInterfaceIndex:(unsigned long long)a0 interfaceName:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyLocalAddressForDefaultIPv4;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (void).cxx_destruct;
- (id)copyLocalAddressForDefaultIPv6;
- (id)ipv4Netmask;
- (id)copyLocalAddressForRemoteAddress:(id)a0;
- (id)createProtocolBufferObject;
- (BOOL)isEqual:(id)a0;
- (BOOL)isShallowEqual:(id)a0;
- (id)initWithInterfaceIndex:(unsigned long long)a0;
- (id)initWithInterface:(id)a0;
- (id)ipv4Broadcast;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
