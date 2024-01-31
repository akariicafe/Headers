@class NSMutableSet;

@interface HFFakeMediaAccessoryItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *mediaAccessoryItems;
@property (retain, nonatomic) NSMutableSet *mediaAccessoryItemTypes;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)reloadItems;

@end
