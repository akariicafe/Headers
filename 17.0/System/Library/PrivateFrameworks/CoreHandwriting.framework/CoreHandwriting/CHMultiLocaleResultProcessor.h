@interface CHMultiLocaleResultProcessor : NSObject

+ (id)combineMultiLocaleResults:(id)a0 locales:(id)a1 topLocaleIndex:(long long)a2 mergedResultPostprocessingBlock:(id /* block */)a3 changeableColumnCountBlock:(id /* block */)a4;
+ (void)updateMultiLocaleResultDictionary:(id)a0 locales:(id)a1;

@end
