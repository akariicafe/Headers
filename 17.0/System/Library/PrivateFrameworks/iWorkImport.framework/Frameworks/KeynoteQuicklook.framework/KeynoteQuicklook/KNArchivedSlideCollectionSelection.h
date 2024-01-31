@class NSString, KNSlideCollectionSelection;

@interface KNArchivedSlideCollectionSelection : TSPObject <TSKArchivedSelection>

@property (readonly, nonatomic) KNSlideCollectionSelection *slideCollectionSelection;
@property (retain, nonatomic) KNSlideCollectionSelection *selection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
