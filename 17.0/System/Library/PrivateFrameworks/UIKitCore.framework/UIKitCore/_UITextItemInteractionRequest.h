@class _UITextItem;

@interface _UITextItemInteractionRequest : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } _range;
@property (retain, nonatomic) _UITextItem *_item;

+ (id)_requestWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 item:(id)a1;

- (void).cxx_destruct;

@end
