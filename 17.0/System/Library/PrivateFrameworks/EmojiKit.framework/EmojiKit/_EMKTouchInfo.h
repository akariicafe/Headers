@class EMKEmojiTokenList;

@interface _EMKTouchInfo : NSObject

@property (retain) EMKEmojiTokenList *tokenList;
@property struct _NSRange { unsigned long long location; unsigned long long length; } tokenListRange;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

- (void).cxx_destruct;

@end
