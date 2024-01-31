@class NSString;

@interface ICTextContentStorageDelegate : NSObject <NSTextContentStorageDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textContentManager:(id)a0 shouldEnumerateTextElement:(id)a1 options:(unsigned long long)a2;
- (id)textContentStorage:(id)a0 textParagraphWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
