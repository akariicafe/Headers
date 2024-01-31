@class NSString;

@interface FPImportCookieEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *domainPathRelativeToVolumeRoot;
@property (readonly, nonatomic) unsigned long long fileID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDomainURL:(id)a0 error:(id *)a1;

@end
