@class LPLinkMetadata;

@interface MSMessageRichLinkLayout : MSMessageTemplateLayout <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LPLinkMetadata *linkMetadata;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setCaption:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_sanitizedCopy;
- (void)setMediaFileURL:(id)a0;
- (void)setSubcaption:(id)a0;
- (id)initWithLinkMetadata:(id)a0;
- (void)setImageSubtitle:(id)a0;
- (void)setImageTitle:(id)a0;
- (void)setTrailingCaption:(id)a0;
- (void)setTrailingSubcaption:(id)a0;

@end
