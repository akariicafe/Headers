@class NSArray, NSDictionary, NSMutableDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (copy, nonatomic) NSAttributedString *attributedContentText;
@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)setAttachments:(id)a0;
- (id)init;
- (void)dealloc;
- (id)attachments;
- (void)encodeWithCoder:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (id)description;
- (id)attributedTitle;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_matchingDictionaryRepresentation;
- (id)attributedContentText;
- (void)setAttributedContentText:(id)a0;

@end
