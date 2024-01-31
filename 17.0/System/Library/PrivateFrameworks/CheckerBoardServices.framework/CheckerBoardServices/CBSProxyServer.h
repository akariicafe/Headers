@class NSString, NSNumber;

@interface CBSProxyServer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *server;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSString *token;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithServer:(id)a0 port:(id)a1 token:(id)a2;

@end
