@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)userInfo;
- (id)_init;
- (id)object;
- (id)description;
- (void).cxx_destruct;
- (id)name;
- (id)_initWithChangedObjects:(id)a0;

@end
