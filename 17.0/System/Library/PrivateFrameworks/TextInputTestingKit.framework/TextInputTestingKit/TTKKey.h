@class NSString, ACTKeyboardLayoutUtils, UIKBTree;

@interface TTKKey : NSObject {
    UIKBTree *_key;
    ACTKeyboardLayoutUtils *_layoutUtils;
}

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) short keyCode;

- (struct CGPoint { double x0; double x1; })center;
- (id)description;
- (void).cxx_destruct;
- (id)initWithUIKBTree:(id)a0 layoutUtils:(id)a1;

@end
