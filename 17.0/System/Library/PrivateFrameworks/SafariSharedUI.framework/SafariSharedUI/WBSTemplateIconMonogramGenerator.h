@interface WBSTemplateIconMonogramGenerator : NSObject

+ (id)monogramStringForTitle:(id)a0 url:(id)a1;
+ (id)monogramStringForURL:(id)a0;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 backgroundColor:(id)a2;
+ (id)monogramStringForTitle:(id)a0 url:(id)a1 shouldRemoveGrammaticalArticles:(BOOL)a2;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 monogramConfiguration:(id)a2 shouldRemoveGrammaticalArticles:(BOOL)a3;
+ (id)_monogramStringForPreparedTitle:(id)a0 url:(id)a1;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 monogramConfiguration:(id)a2;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 size:(struct CGSize { double x0; double x1; })a2 fontSize:(double)a3 fontWeight:(long long)a4 fontDesign:(long long)a5 baselineOffset:(double)a6 backgroundColor:(id)a7 cornerRadius:(double)a8;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 size:(struct CGSize { double x0; double x1; })a2 fontSize:(double)a3 fontWeight:(long long)a4 fontDesign:(long long)a5 baselineOffset:(double)a6 backgroundColor:(id)a7 foregroundColor:(id)a8 cornerRadius:(double)a9;
+ (id)monogramWithTitle:(id)a0 url:(id)a1 size:(struct CGSize { double x0; double x1; })a2 fontSize:(double)a3 fontWeight:(long long)a4 fontDesign:(long long)a5 baselineOffset:(double)a6 backgroundColor:(id)a7 foregroundColor:(id)a8 cornerRadius:(double)a9 shouldRemoveGrammaticalArticles:(BOOL)a10;

@end
