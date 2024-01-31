@class NSCache, ICInlineAttachment;

@interface ICInlineTextAttachment : ICAbstractTextAttachment

@property (class, readonly, nonatomic) NSCache *imageCache;

@property (retain, nonatomic) ICInlineAttachment *attachment;

+ (Class)textAttachmentClassForAttachment:(id)a0;
+ (id)textAttachmentWithAttachment:(id)a0;

- (BOOL)isUnsupported;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (id)altText;
- (id)initWithAttachment:(id)a0;
- (id)attachmentIdentifier;
- (id)attachmentInContext:(id)a0;
- (id)attachmentUTI;
- (Class)attachmentViewClassForTextContainer:(id)a0;
- (id)inlineAttachmentInContext:(id)a0;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 styleAttributes:(id)a1 textContainer:(id)a2;

@end
