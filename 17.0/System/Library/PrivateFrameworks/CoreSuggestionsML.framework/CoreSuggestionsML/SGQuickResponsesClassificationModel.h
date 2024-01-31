@interface SGQuickResponsesClassificationModel : SGQuickResponsesModel

+ (id)featurizerWithMethods:(id)a0 bucketSize:(unsigned long long)a1 characterNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 tokenNGramRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 idVectorLength:(unsigned long long)a4 extraIdOptions:(unsigned long long)a5 vectorizerStrategy:(unsigned long long)a6 vectorNormalization:(long long)a7 vocab:(id)a8;
+ (id)newTransformerInstanceForConfig:(id)a0 seed:(unsigned long long)a1 useSeed:(BOOL)a2;
+ (id)newTransformerInstanceForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2 vocabPath:(id)a3;
+ (id)newTransformerInstanceForLanguage:(id)a0 withDictionary:(id)a1 withVocab:(id)a2 withSeed:(unsigned long long)a3 forMode:(unsigned long long)a4;

@end
