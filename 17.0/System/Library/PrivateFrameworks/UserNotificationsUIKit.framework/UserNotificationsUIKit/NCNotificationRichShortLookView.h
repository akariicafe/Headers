@interface NCNotificationRichShortLookView : NCNotificationShortLookView

@property (nonatomic, getter=isAttachmentImageFeatured) BOOL attachmentImageFeatured;

- (id)_newNotificationContentView;
- (id)_richContentView;
- (void)_layoutNotificationContentView;

@end
