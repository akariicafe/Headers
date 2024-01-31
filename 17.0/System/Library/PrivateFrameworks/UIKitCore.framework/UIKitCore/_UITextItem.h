@class NSURL, NSTextAttachment, NSString;

@interface _UITextItem : UITextItem

@property (readonly, nonatomic) long long _itemType;
@property (readonly, nonatomic) NSURL *_link;
@property (readonly, nonatomic) NSTextAttachment *_textAttachment;
@property (readonly, nonatomic) NSString *_customIdentifier;

@end
