@interface ICQQuotaInfoRequest : ICQUsageQuotaRequest

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithAccount:(id)a0 accountStore:(id)a1 detailed:(BOOL)a2;

@end
