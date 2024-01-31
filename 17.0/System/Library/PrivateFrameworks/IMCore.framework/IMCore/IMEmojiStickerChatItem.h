@class NSString;

@interface IMEmojiStickerChatItem : IMAssociatedStickerChatItem

@property (readonly, nonatomic) NSString *emojiString;

- (id)_initWithItem:(id)a0 sender:(id)a1 transferGUID:(id)a2 emojiSticker:(id)a3;

@end
