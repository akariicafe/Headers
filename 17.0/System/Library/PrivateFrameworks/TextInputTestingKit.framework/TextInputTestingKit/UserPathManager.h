@class NSString, NSMutableDictionary, NSObject;
@protocol TTKTestCaseSource;

@interface UserPathManager : NSObject {
    NSObject<TTKTestCaseSource> *_source;
    NSString *_pathFile;
    NSMutableDictionary *_transforms;
    NSMutableDictionary *_lookupTree;
    NSMutableDictionary *_translatedKBDLayouts;
    void *m_generator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)buildLookupTree;
- (BOOL)computeTranslations:(id)a0;
- (id)initWithPathFile:(id)a0;
- (id)lookup:(id)a0 keyboardController:(id)a1;
- (void)setRandomNumberSeed:(unsigned int)a0;
- (id)translateLayoutForKeys:(id)a0 keyboardController:(id)a1;

@end
