@class NSString, GEOApplicationAuditToken;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *canonicalName;
@property (copy, nonatomic) NSString *uniqueClientId;
@property (retain, nonatomic) GEOApplicationAuditToken *auditToken;

+ (id)clientInfoForNavdPredictions;

- (unsigned long long)hash;
- (id)initWithCanonicalName:(id)a0 instanceId:(unsigned long long)a1;
- (id)initWithCanonicalName:(id)a0 instanceId:(unsigned long long)a1 auditToken:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isNavdClientInfo;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCalendarClientInfo;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
