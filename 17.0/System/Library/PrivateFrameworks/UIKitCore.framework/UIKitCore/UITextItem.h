@class NSURL, NSTextAttachment, NSString;

@interface UITextItem : NSObject

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, nonatomic) NSURL *link;
@property (readonly, nonatomic) NSTextAttachment *textAttachment;
@property (readonly, nonatomic) NSString *tagIdentifier;

+ (id)_itemWithLink:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)_itemWithTag:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (id)_itemWithTextAttachment:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void).cxx_destruct;
- (id)_link;
- (id)_textAttachment;
- (id)_customIdentifier;
- (id)_initWithType:(long long)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (long long)_itemType;

@end
