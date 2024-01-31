@class NSDictionary, MBSystemDomainsVersions, NSMutableDictionary;
@protocol MBDomainManagerDelegate;

@interface MBDomainManager : NSObject

@property (retain, nonatomic) MBSystemDomainsVersions *systemDomainsVersions;
@property (retain, nonatomic) NSDictionary *systemDomainsByName;
@property (retain, nonatomic) NSMutableDictionary *domainsByName;
@property (weak, nonatomic) id<MBDomainManagerDelegate> delegate;

+ (id)_readDomainsFromPlist:(id)a0 accountType:(long long)a1 userVolumeMountPoint:(id)a2 error:(id *)a3;

- (id)allDomains;
- (id)initWithPersona:(id)a0;
- (void).cxx_destruct;
- (void)addDomain:(id)a0;
- (id)redirectDomain:(id)a0 forRelativePath:(id)a1;
- (id)_initWithAccountType:(long long)a0 userVolumeMountPoint:(id)a1 plistPath:(id)a2 error:(id *)a3;
- (id)_initWithSystemDomains:(id)a0 versions:(id)a1;
- (void)addDomain:(id)a0 forName:(id)a1;
- (BOOL)containsDomainName:(id)a0;
- (id)domainForName:(id)a0;
- (id)domainForPath:(id)a0 relativePath:(id *)a1;
- (id)initForTestingWithDomains:(id)a0;
- (id)initForTestingWithPersona:(id)a0 systemDomainsPlistAtPath:(id)a1;
- (id)initWithSystemDomains:(id)a0;
- (BOOL)isSystemDomainName:(id)a0;

@end
