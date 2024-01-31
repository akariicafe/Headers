@class NSURL, NSString;

@interface PCDisplayContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *legacyAttachmentURL;
@property (copy, nonatomic) NSString *legacyBodyText;
@property (copy, nonatomic) NSString *localizedPrimaryAltText;
@property (copy, nonatomic) NSString *localizedSecondaryAltText;
@property (nonatomic) long long interactionBehavior;
@property (nonatomic) long long interactionDirection;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
