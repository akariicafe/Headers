@class MKMapItem, CNContact;
@protocol _MKPlaceItem;

@interface MKPlaceItemActionDataProvider : MKPlaceActionDataProvider

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) id<_MKPlaceItem> placeItem;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (void)_placeItemDidUpdate;
- (BOOL)canShowCallAction;
- (id)messagesForBusinessURL;
- (BOOL)supportsMessagesForBusiness;
- (void)updateWithPlaceItem:(id)a0 options:(unsigned long long)a1;

@end
