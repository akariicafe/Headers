@class NSString, NSData, NLModel;

@interface NLGazetteer : NSObject {
    void *_gazetteer;
    NLModel *_nlModel;
}

@property (readonly, copy) NSString *language;
@property (readonly, copy) NSData *data;

+ (id)gazetteerWithContentsOfURL:(id)a0 error:(id *)a1;
+ (id)gazetteerWithData:(id)a0 error:(id *)a1;
+ (id)gazetteerWithMLModel:(id)a0 error:(id *)a1;
+ (BOOL)writeGazetteerForDictionary:(id)a0 language:(id)a1 toURL:(id)a2 error:(id *)a3;
+ (BOOL)writeGazetteerMLModelForDictionary:(id)a0 language:(id)a1 toURL:(id)a2 options:(id)a3 error:(id *)a4;

- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)labels;
- (id)initWithNLModel:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)modelDescription;
- (id)initWithMLModel:(id)a0 error:(id *)a1;
- (id)labelForString:(id)a0;
- (void)_addImplementationToArray:(struct __CFArray { } *)a0;
- (void *)_gazetteerRef;
- (id)initWithDictionary:(id)a0 language:(id)a1 error:(id *)a2;
- (BOOL)writeMLModelToURL:(id)a0 options:(id)a1 error:(id *)a2;

@end
