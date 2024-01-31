@class NSString, CKAudioMediaObject;

@interface CKAudioMessageChatItem : CKExpirableMessageChatItem

@property (readonly, nonatomic) CKAudioMediaObject *mediaObject;
@property (nonatomic) BOOL isExpanded;
@property (readonly, nonatomic) NSString *audioTranscriptionText;

- (Class)cellClass;
- (BOOL)shouldCacheSize;
- (id)_audioTranscriptionTextFromTransfer;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (BOOL)isAudioMessage;

@end
