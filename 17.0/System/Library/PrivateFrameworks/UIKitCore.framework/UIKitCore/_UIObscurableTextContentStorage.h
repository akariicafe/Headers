@class _UICascadingTextStorage, NSAttributedString;

@interface _UIObscurableTextContentStorage : NSTextContentStorage {
    _UICascadingTextStorage *_cascadingTextStorage;
    NSAttributedString *_obscuredAttributedString;
}

@property (readonly, nonatomic) NSAttributedString *obscuredAttributedString;
@property (nonatomic, getter=isObscured) BOOL obscured;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } unobscuredRange;

- (id)attributedString;
- (id)initWithTextStorage:(id)a0;
- (void)_invalidateObscuredAttributedString;
- (void).cxx_destruct;
- (void)setTextStorage:(id)a0;
- (void)processEditingForTextStorage:(id)a0 edited:(unsigned long long)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 changeInLength:(long long)a3 invalidatedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (void)_validateUnobscuredRange;

@end
