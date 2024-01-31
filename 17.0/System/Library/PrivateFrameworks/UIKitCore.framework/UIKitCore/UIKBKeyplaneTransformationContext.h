@class NSString, UIKBScreenTraits, UIKBTree;

@interface UIKBKeyplaneTransformationContext : NSObject

@property (retain, nonatomic) UIKBTree *activeKeyboard;
@property (retain, nonatomic) UIKBTree *activeKeyplane;
@property (nonatomic) struct CGSize { double width; double height; } keyboardSize;
@property (retain, nonatomic) NSString *currentKeyplaneName;
@property (retain, nonatomic) UIKBScreenTraits *screenTraits;
@property (nonatomic) BOOL usesScriptSwitch;
@property (nonatomic) double resizingOffset;

- (void).cxx_destruct;

@end
