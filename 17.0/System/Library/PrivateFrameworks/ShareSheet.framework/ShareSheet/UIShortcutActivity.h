@class NSString, NSArray, UIImage, NSNumber;

@interface UIShortcutActivity : UIApplicationExtensionActivity

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) NSString *singleUseToken;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSNumber *sortValue;
@property (retain, nonatomic) NSArray *photosAssetIdentifiers;

- (id)activityType;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)_actionImage;
- (long long)_defaultSortGroup;
- (BOOL)_isServiceExtension;
- (id)initWithApplicationExtension:(id)a0 partialShortcutWithName:(id)a1 identifier:(id)a2 image:(id)a3 sortValue:(id)a4;
- (id)initWithApplicationExtension:(id)a0 singleUseToken:(id)a1 photosAssetIdentifiers:(id)a2;
- (id)initWithPartial:(id)a0;
- (void)prepareWithActivityExtensionItemData:(id)a0;

@end
