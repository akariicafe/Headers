@class TSKSelection, NSString, TSTTableControlCellSelection;

@interface TSTTableArchivedControlCellSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSTTableControlCellSelection *controlCellSelection;
@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
