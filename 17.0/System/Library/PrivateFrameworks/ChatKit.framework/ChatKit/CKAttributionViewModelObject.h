@class UIColor, NSArray, CKAssociatedMessageChatItem, NSDate, CKAttributionViewModelObjectIdentifier, UIImage;

@interface CKAttributionViewModelObject : NSObject

@property (readonly, nonatomic) CKAttributionViewModelObjectIdentifier *identifier;
@property (readonly, nonatomic) NSArray *associatedMessageItems;
@property (readonly, nonatomic) NSArray *senders;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) long long senderCount;
@property (readonly, nonatomic) NSDate *mostRecentSendDate;
@property (readonly, nonatomic) CKAssociatedMessageChatItem *mostRecentChatItem;
@property (readonly, nonatomic) UIImage *attributionImage;
@property (readonly, nonatomic) UIColor *attributionImageTintColor;
@property (readonly, nonatomic) BOOL representsTapback;
@property (readonly, nonatomic) BOOL representsSticker;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 associatedMessageItems:(id)a1;

@end
