@class NSString, UITextRange;

@interface UITextReplacementGenerator : NSObject

@property (retain, nonatomic) UITextRange *replacementRange;
@property (copy, nonatomic) NSString *stringToReplace;

- (void).cxx_destruct;
- (id)replacements;
- (void)addPlaceholderForEmptyReplacements:(id)a0;
- (BOOL)isStringToReplaceMisspelled;
- (id)replacementWithText:(id)a0;
- (BOOL)shouldAllowString:(id)a0 intoReplacements:(id)a1;

@end
