@class NSURL, NSDate, REMTemplatePublicLinkConfiguration;

@interface REMTemplatePublicLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) REMTemplatePublicLinkConfiguration *configuration;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL canBeUpdated;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1 creationDate:(id)a2 lastModifiedDate:(id)a3 expirationDate:(id)a4 canBeUpdated:(BOOL)a5;

@end
