@class IMHandle, NSString, NSDictionary, IMEmojiSticker, NSDate, IMTapback;

@interface IMAssociatedMessageChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) BOOL isFromMe;
@property (readonly, nonatomic) BOOL parentMessageIsFromMe;
@property (readonly, nonatomic) BOOL failed;
@property (readonly, nonatomic) NSString *associatedMessageGUID;
@property (readonly, nonatomic) long long associatedMessageType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } associatedMessageRange;
@property (readonly, nonatomic) struct IMAssociatedMessageGeometryDescriptor { unsigned long long layoutIntent; unsigned long long associatedLayoutIntent; double parentPreviewWidth; double xScalar; double yScalar; double scale; double rotation; } geometryDescriptor;
@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) IMHandle *sender;
@property (readonly, nonatomic) NSDictionary *messageSummaryInfo;
@property (readonly, nonatomic) IMTapback *tapback;
@property (readonly, nonatomic) IMEmojiSticker *emojiSticker;
@property (readonly, nonatomic) BOOL isEmojiSticker;
@property (nonatomic) unsigned long long stickerEffectType;

- (id)message;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setEmojiSticker:(id)a0;
- (void)setTapback:(id)a0;
- (id)_imAssociatedMessageItem;
- (id)_initWithItem:(id)a0 sender:(id)a1;
- (void)_setGeometryDescriptor:(struct IMAssociatedMessageGeometryDescriptor { unsigned long long x0; unsigned long long x1; double x2; double x3; double x4; double x5; double x6; })a0;
- (void)_setParentMessageIsFromMe:(BOOL)a0;

@end
