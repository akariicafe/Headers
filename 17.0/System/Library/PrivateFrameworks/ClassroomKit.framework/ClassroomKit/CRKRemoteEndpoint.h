@class NSString;

@interface CRKRemoteEndpoint : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) unsigned short port;
@property (readonly, copy, nonatomic) NSString *stringValue;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIPAddress:(id)a0 port:(unsigned short)a1;
- (BOOL)isEqualToRemoteEndpoint:(id)a0;

@end
