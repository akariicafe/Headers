@class SKUIItem, NSString, NSArray, SKUIGiftTheme, NSDate;

@interface SKUIGift : NSObject <NSCopying>

@property (copy, nonatomic) NSString *totalGiftAmountString;
@property (copy, nonatomic) SKUIGiftTheme *theme;
@property (readonly, nonatomic) SKUIItem *item;
@property (readonly, nonatomic) long long giftCategory;
@property (copy, nonatomic) NSDate *deliveryDate;
@property (nonatomic) long long giftAmount;
@property (copy, nonatomic) NSString *giftAmountString;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSArray *recipientAddresses;
@property (copy, nonatomic) NSString *senderEmailAddress;
@property (copy, nonatomic) NSString *senderName;

- (void)reset;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItem:(id)a0;
- (id)HTTPBodyDictionary;
- (id)initWithGiftCategory:(long long)a0;

@end
