@interface AXOutputRequest : NSObject

+ (id)addAttributesToAction:(id)a0 fromDictionary:(id)a1;
+ (id)processString:(id)a0 brailleString:(id)a1 breakWords:(BOOL)a2 withLanguage:(id)a3 atIndex:(long long)a4 category:(id)a5;
+ (id)processStringsAndLanguages:(id)a0 brailleString:(id)a1 breakWords:(BOOL)a2 withLanguage:(id)a3 atIndex:(long long)a4 category:(id)a5;

@end
