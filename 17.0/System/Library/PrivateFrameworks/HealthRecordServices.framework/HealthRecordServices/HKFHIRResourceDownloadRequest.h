@class NSString, NSDictionary, NSURL, HKClinicalIngestionContext;

@interface HKFHIRResourceDownloadRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *resourceType;
@property (readonly, copy, nonatomic) NSDictionary *resourceSchemaDefinition;
@property (readonly, copy, nonatomic) NSURL *fullRequestURL;
@property (readonly, copy, nonatomic) HKClinicalIngestionContext *context;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResourceType:(id)a0 resourceSchemaDefinition:(id)a1 fullRequestURL:(id)a2 context:(id)a3;

@end
