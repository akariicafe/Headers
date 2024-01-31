@class NSPredicate, NSString;

@interface LNFocusConfigurationAppContext : LNActionAppContext <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPredicate *notificationFilterPredicate;
@property (readonly, copy, nonatomic) NSString *targetContentIdentifierPrefix;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithNotificationFilterPredicate:(id)a0 targetContentIdentifierPrefix:(id)a1;

@end
