@interface AMSBagURLParser : NSObject

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeOfTemplateInURLString:(id)a0;
+ (id)_URLBySubstitutingVariablesInURLString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingPromiseBlock:(id /* block */)a2;
+ (id)URLBySubstitutingVariablesInURLString:(id)a0 usingPromiseBlock:(id /* block */)a1;
+ (id)_firstVariableInTemplate:(id)a0 includeTags:(BOOL)a1;
+ (id)URLBySubstitutingVariablesInURLString:(id)a0 usingBlock:(id /* block */)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_rangeofSubstringWithOpeningTag:(id)a0 closingTag:(id)a1 inString:(id)a2;

@end
