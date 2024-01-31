@class NSString, NSMutableArray;

@interface _MFMailComposeContentVariation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) BOOL bodyIsHTML;
@property (copy, nonatomic) NSMutableArray *attachmentIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addAttachmentIdentifier:(id)a0;

@end
