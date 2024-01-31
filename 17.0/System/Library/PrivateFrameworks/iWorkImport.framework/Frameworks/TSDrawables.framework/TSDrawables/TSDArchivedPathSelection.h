@class NSString, TSKSelection;

@interface TSDArchivedPathSelection : TSPObject <TSKArchivedSelection>

@property (retain, nonatomic) TSKSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
