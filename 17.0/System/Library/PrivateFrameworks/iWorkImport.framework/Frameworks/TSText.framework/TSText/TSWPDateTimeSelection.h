@class TSWPRep, TSWPDateTimeSmartField;

@interface TSWPDateTimeSelection : TSKSelection <TSWPTransientSelection>

@property (readonly, nonatomic) TSWPDateTimeSmartField *dateTimeField;
@property (readonly, nonatomic) TSWPRep *dateTimeRep;

+ (Class)archivedSelectionClass;
+ (id)selectionWithDateTimeField:(id)a0 rep:(id)a1;

- (void).cxx_destruct;
- (BOOL)canSaveSelectionToArchivedViewState;
- (id)initWithDateTimeField:(id)a0 rep:(id)a1;

@end
