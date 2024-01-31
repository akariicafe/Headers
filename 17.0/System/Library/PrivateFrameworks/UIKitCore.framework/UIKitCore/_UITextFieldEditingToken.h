@class _UICascadingTextStorage, NSArray, NSString;

@interface _UITextFieldEditingToken : NSObject <_UITextFieldEditingToken> {
    struct { unsigned char restoreTextAttributes : 1; unsigned char restoreDefaultAttributes : 1; unsigned char ended : 1; } _flags;
}

@property (nonatomic) BOOL restoreTextAttributes;
@property (nonatomic) BOOL restoreDefaultAttributes;
@property (readonly, weak, nonatomic) _UICascadingTextStorage *textStorage;
@property (readonly, nonatomic) NSArray *attributeNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)endEditing;
- (void).cxx_destruct;
- (id)initWithTextStorage:(id)a0 attributeNames:(id)a1;

@end
