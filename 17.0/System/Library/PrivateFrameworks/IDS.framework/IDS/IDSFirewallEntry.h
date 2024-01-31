@class NSString, IDSURI, NSDate;

@interface IDSFirewallEntry : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *mergeID;
@property (nonatomic) BOOL isDonated;
@property (readonly, nonatomic) IDSURI *uri;
@property (readonly, nonatomic) NSDate *lastSeen;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithURI:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURI:(id)a0 andLastSeenDate:(id)a1;

@end
