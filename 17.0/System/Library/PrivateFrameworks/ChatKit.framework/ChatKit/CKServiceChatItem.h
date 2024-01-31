@interface CKServiceChatItem : CKMultilineStampLabelChatItem

- (unsigned long long)layoutType;
- (id)_serviceName;
- (id)_serviceImage;
- (id)_subtextImage;
- (id)_subtextWithImage:(id)a0;
- (BOOL)isStewieItem;
- (id)loadTranscriptText;

@end
