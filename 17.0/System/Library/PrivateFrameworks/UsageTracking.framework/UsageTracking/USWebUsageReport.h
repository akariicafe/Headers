@class NSString, NSDictionary;

@interface USWebUsageReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *domainIdentifier;
@property (readonly) BOOL webUsageTrusted;
@property (readonly) double totalUsageTime;
@property (readonly, copy) NSDictionary *webUsageByDomain;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_usWebUsageReportCommonInitWithDomainIdentifier:(id)a0 webUsageTrusted:(BOOL)a1 totalUsageTime:(double)a2 webUsageByDomain:(id)a3;
- (id)initWithDomainIdentifier:(id)a0 totalUsageTime:(double)a1 webUsageByDomain:(id)a2;
- (id)initWithDomainIdentifier:(id)a0 webUsageTrusted:(BOOL)a1 totalUsageTime:(double)a2 webUsageByDomain:(id)a3;

@end
