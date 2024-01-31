@class NSString, UIResponder, UIView, RVItem;
@protocol UITextInput;

@interface _UITextServiceSessionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) UIResponder<UITextInput> *textInput;
@property (retain, nonatomic) UIView *view;
@property (readonly, copy, nonatomic) NSString *textWithContext;
@property (readonly, copy, nonatomic) RVItem *rvItemWithContext;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } presentationRect;

+ (id)selectedTextRangeForTextInput:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionBoundingBoxForTextInput:(id)a0;
+ (id)sessionContextForType:(long long)a0 withTextInput:(id)a1;
+ (id)sessionContextWithText:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 withView:(id)a3;
+ (id)sessionContextWithText:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_gatherAdditionalContext;
- (BOOL)_typeRequiresContext:(long long)a0;
- (void)convertRectToView:(id)a0;
- (id)initForType:(long long)a0 withText:(id)a1 withTextInput:(id)a2 withView:(id)a3;

@end
