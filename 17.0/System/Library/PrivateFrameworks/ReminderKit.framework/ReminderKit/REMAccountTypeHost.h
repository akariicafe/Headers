@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (BOOL)isCloudBased;
- (unsigned long long)hash;
- (long long)_accountType;
- (id)internalDescription;
- (BOOL)isExchange;
- (id)description;
- (BOOL)isPrimaryCloudKit;
- (BOOL)isValid;
- (BOOL)isNonPrimaryCloudKit;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (BOOL)isCalDav;
- (BOOL)isEqual:(id)a0;
- (BOOL)isLocal;
- (BOOL)isLocalInternal;
- (BOOL)isCloudKit;

@end
