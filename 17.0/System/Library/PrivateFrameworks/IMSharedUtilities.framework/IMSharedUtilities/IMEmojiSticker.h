@class NSString;

@interface IMEmojiSticker : IMSticker

@property (class, readonly, nonatomic) NSString *defaultEmojiStickerPackID;

@property (readonly, copy, nonatomic) NSString *emojiString;

+ (id)stickerPackID;
+ (id)tempFileURLForStickerID:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEmojiString:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2;
- (BOOL)isEmojiSticker;
- (id)initWithEmojiString:(id)a0 stickerID:(id)a1 stickerPackID:(id)a2 fileURL:(id)a3 accessibilityLabel:(id)a4 moodCategory:(id)a5 stickerName:(id)a6 textToSpeechName:(id)a7;
- (id)initWithEmojiString:(id)a0 stickerPackID:(id)a1;
- (id)initWithEmojiString:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 moodCategory:(id)a3;

@end
