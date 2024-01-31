@class NSUUID, NSString, NSDictionary, NSDate;

@interface HDAttachmentReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSString *schemaIdentifier;
@property (readonly, nonatomic) long long schemaVersion;
@property (readonly, copy, nonatomic) NSString *objectIdentifier;
@property (readonly, copy, nonatomic) NSUUID *attachmentIdentifier;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long options;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long cloudStatus;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)hkAttachmentReferenceWithAttachment:(id)a0;
- (id)initWithIdentifier:(id)a0 schemaIdentifier:(id)a1 creationDate:(id)a2 options:(long long)a3 metadata:(id)a4;
- (id)initWithIdentifier:(id)a0 schemaIdentifier:(id)a1 creationDate:(id)a2 options:(long long)a3 metadata:(id)a4 type:(long long)a5 cloudStatus:(long long)a6;
- (id)referenceWithObjectIdentifier:(id)a0;

@end
