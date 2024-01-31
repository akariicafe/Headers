@class TSKSelection, NSString, TSWPDateTimeSelection;

@interface TSWPArchivedDateTimeSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSWPDateTimeSelection *dateTimeSelection;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
