@class NSString, TSKSelection;

@interface TSKArchivedDocumentSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;

@end
