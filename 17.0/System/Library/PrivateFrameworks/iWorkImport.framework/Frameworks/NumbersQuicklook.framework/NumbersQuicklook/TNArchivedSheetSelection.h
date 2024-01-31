@class NSString, TNSheetSelection;

@interface TNArchivedSheetSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TNSheetSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
