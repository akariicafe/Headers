@class NSUUID, NSString, HKAttachment, NSDate, NSDictionary;

@interface HKAttachmentReference : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *objectIdentifier;
@property (readonly, copy) HKAttachment *attachment;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSDictionary *metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0 objectIdentifier:(id)a1 attachment:(id)a2 creationDate:(id)a3 metadata:(id)a4;

@end
