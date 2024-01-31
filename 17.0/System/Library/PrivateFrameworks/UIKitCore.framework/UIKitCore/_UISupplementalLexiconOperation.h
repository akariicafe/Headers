@class _UISupplementalLexicon;

@interface _UISupplementalLexiconOperation : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, weak, nonatomic) _UISupplementalLexicon *lexicon;
@property (readonly, nonatomic) unsigned long long lexiconIdentifier;

- (void).cxx_destruct;
- (id)initAddOperationWithLexicon:(id)a0;
- (id)initRemoveOperationWithLexiconIdentifier:(unsigned long long)a0;

@end
