@class NSNumber;

@interface DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
