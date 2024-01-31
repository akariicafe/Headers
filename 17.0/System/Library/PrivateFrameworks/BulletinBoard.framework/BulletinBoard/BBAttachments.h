@class NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSCountedSet *additionalAttachments;
@property (nonatomic) long long primaryType;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addAttachmentOfType:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToAttachments:(id)a0;
- (unsigned long long)numberOfAdditionalAttachments;
- (unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)a0;

@end
