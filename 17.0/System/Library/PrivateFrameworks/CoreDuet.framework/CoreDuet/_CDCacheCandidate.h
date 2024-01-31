@class NSString;

@interface _CDCacheCandidate : NSObject

@property (retain, nonatomic) NSString *domainId;
@property (retain, nonatomic) NSString *derivedIntentId;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSString *recipientsId;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDomainId:(id)a0 derivedIntentId:(id)a1 bundleId:(id)a2 recipientsId:(id)a3;

@end
