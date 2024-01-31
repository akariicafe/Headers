@interface ICUnsupportedTextAttachmentWithFallbackPDF : ICPDFTextAttachment

- (id)attachmentAsNSTextAttachment;
- (BOOL)supportsMultipleThumbnailsOnSameLine;

@end
