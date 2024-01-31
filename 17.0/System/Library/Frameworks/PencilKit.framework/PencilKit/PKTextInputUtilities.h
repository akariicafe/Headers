@interface PKTextInputUtilities : NSObject

+ (BOOL)isResponderSupportedTextInput:(id)a0 checkForNotes:(BOOL)a1 outTextInputTraits:(id *)a2;
+ (id)_notesTextViewFromResponder:(id)a0;
+ (BOOL)isResponderSupportedTextInput:(id)a0;
+ (BOOL)isResponderSupportedTextInput:(id)a0 outTextInputTraits:(id *)a1;
+ (void)markAnalyticsForDeletionCount:(unsigned long long)a0 rangeToReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)markAnalyticsForInsertionWithTexts:(id)a0 rangeToReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)markAnalyticsForInsertionWithTexts:(id)a0 rangeToReplace:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withAlternatives:(long long)a2;
+ (void)markAnalyticsForRedo;
+ (void)markAnalyticsForSelectionChange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 relativeRangeBefore:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)markAnalyticsForUndo;
+ (id)nonEditableTextInputForView:(id)a0;
+ (long long)responderTextInputSource:(id)a0;
+ (BOOL)shouldAvoidNonEditableView:(id)a0;
+ (BOOL)textInputTraitsAreSecure:(id)a0;
+ (id)textInputTraitsFromTextInput:(id)a0;

@end
