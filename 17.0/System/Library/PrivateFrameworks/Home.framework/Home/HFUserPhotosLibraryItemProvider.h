@class HMHome, NSMutableSet;

@interface HFUserPhotosLibraryItemProvider : HFItemProvider

@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NSMutableSet *userPhotosLibraryItems;

- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
