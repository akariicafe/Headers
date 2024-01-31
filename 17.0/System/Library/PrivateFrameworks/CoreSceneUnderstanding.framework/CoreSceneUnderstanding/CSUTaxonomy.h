@class NSString, NSArray, NSMutableDictionary;

@interface CSUTaxonomy : NSObject {
    struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy *__ptr_; struct __shared_weak_count *__cntrl_; } _taxonomy;
    NSArray *_vocabularies;
    NSMutableDictionary *_labels;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy *x0; struct __shared_weak_count *x1; } taxonomy;
@property (readonly, copy, nonatomic) NSArray *vocabularyNames;
@property (readonly, nonatomic) BOOL hasLabelAttributes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTaxonomy:(struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy *x0; struct __shared_weak_count *x1; })a0;
- (id)attributesForLabel:(id)a0;
- (unsigned long long)countLabelsInVocabularyNamed:(id)a0;
- (void)enumerateLabelsInTaxonomyUsingBlock:(id /* block */)a0;
- (void)enumerateLabelsInVocabularyNamed:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasVocabularyNamed:(id)a0;
- (id)initWithTaxonomy:(struct shared_ptr<csu::BaseTaxonomy> { struct BaseTaxonomy *x0; struct __shared_weak_count *x1; })a0 taxonomyHasLabelAttributes:(BOOL)a1;
- (id)labelsInVocabularyNamed:(id)a0;

@end
