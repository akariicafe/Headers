@class UIResponder;

@interface UIKBTextEditingTraits : NSObject

@property (readonly, nonatomic) BOOL isBold;
@property (readonly, nonatomic) BOOL isItalicized;
@property (readonly, nonatomic) BOOL isUnderlined;
@property (readonly, nonatomic) BOOL canToggleBoldface;
@property (readonly, nonatomic) BOOL canToggleItalics;
@property (readonly, nonatomic) BOOL canToggleUnderline;
@property (readonly, nonatomic) BOOL supportStyling;
@property (nonatomic) BOOL canCut;
@property (readonly, nonatomic) BOOL canCopy;
@property (readonly, nonatomic) BOOL canPaste;
@property (readonly, nonatomic) BOOL canMoveCursorLeft;
@property (readonly, nonatomic) BOOL canMoveCursorRight;
@property (readonly, weak, nonatomic) UIResponder *firstResponder;

+ (id)traitsForEditingInteractionWithFirstResponder:(id)a0 canRespondBlock:(id /* block */)a1 keyMaskFlags:(unsigned long long)a2;
+ (id)traitsWithResponder:(id)a0 keyMaskFlags:(unsigned long long)a1;

- (id)initWithResponder:(id)a0 canRespondBlock:(id /* block */)a1 keyMaskFlags:(unsigned long long)a2 sender:(id)a3;
- (void).cxx_destruct;

@end
