@class TSKDocumentRoot;

@interface TSKDocumentSelection : TSKSelection

@property (readonly, weak, nonatomic) TSKDocumentRoot *documentRoot;

+ (Class)archivedSelectionClass;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDocumentRoot:(id)a0;

@end
