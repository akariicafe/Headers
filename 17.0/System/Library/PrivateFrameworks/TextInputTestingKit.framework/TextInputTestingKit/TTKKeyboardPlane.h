@class ACTKeyboardLayoutUtils, UIKBTree;

@interface TTKKeyboardPlane : NSObject {
    UIKBTree *_keyplane;
    ACTKeyboardLayoutUtils *_layoutUtils;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (void).cxx_destruct;
- (id)findKey:(id)a0;
- (id)initWithUIKBTree:(id)a0 layoutUtils:(id)a1;
- (id)initWithUIKBTree:(id)a0 locale:(id)a1;
- (id)jsonFrameArrayForWord:(id)a0;

@end
