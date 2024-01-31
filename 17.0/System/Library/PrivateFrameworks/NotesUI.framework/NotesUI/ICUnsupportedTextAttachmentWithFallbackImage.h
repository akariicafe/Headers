@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (id)attachmentAsNSTextAttachment;
- (BOOL)supportsMultipleThumbnailsOnSameLine;

@end
