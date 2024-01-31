@interface ICImageTextAttachment : ICTextAttachment

- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (id)supportedPresentationSizes;
- (BOOL)supportsMultipleThumbnailsOnSameLine;

@end
