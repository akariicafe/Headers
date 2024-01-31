@class UIColor, NSString, UIImage, UIImageSymbolConfiguration, HKFillStyle;

@interface HKDisplayCategory : NSObject {
    id /* block */ _keyColor;
    id /* block */ _symbolConfiguration;
}

@property (readonly, nonatomic) long long categoryID;
@property (readonly, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *embeddedDisplayName;
@property (readonly, nonatomic) NSString *largeListIconName;
@property (readonly, nonatomic) NSString *listIconName;
@property (readonly, nonatomic) NSString *healthDataIconName;
@property (readonly, nonatomic) NSString *shareIconName;
@property (readonly, nonatomic) NSString *systemImageName;
@property (readonly, nonatomic) UIImage *largeListIcon;
@property (readonly, nonatomic) UIImage *listIcon;
@property (readonly, nonatomic) UIImage *shareIcon;
@property (readonly, nonatomic) UIImage *systemImage;
@property (readonly, nonatomic) UIImageSymbolConfiguration *multiColorImageConfiguration;
@property (readonly, nonatomic) BOOL isMeCategory;
@property (readonly, nonatomic) BOOL isTopLevelCategory;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) HKFillStyle *fillStyle;

+ (id)categoryWithName:(id)a0;
+ (id)categoryWithID:(long long)a0;
+ (id)allCategories;
+ (id)sortedCategories;
+ (id)topLevelCategoryIdentifiers;

- (id)init;
- (unsigned long long)hash;
- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_image;
- (id)multiColorImageConfiguration;
- (id)initWithCategoryID:(long long)a0 displayName:(id)a1 listIconName:(id)a2 largeListIconName:(id)a3 shareIconName:(id)a4 systemImageName:(id)a5;

@end
