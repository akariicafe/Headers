@class TSKViewStateRoot, TSPDocumentRevision;

@interface TSKViewState : TSPObject

@property (retain, nonatomic) TSKViewStateRoot *viewStateRoot;
@property (copy, nonatomic) TSPDocumentRevision *documentRevision;

- (void).cxx_destruct;
- (id)packageLocator;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)initWithContext:(id)a0 viewStateRoot:(id)a1;

@end
