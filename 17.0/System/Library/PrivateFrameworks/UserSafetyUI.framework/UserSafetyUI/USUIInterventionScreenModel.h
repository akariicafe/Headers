@class NSString, NSArray;

@interface USUIInterventionScreenModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *emoji;
@property (copy, nonatomic) NSArray *bullets;
@property (copy, nonatomic) NSArray *actions;

+ (id)bulletsForScreen:(long long)a0 workflow:(long long)a1 type:(long long)a2;
+ (id)emojiForScreen:(long long)a0;
+ (id)actionsForScreen:(long long)a0 workflow:(long long)a1 type:(long long)a2 options:(long long)a3;
+ (id)actionsForScreenOne:(long long)a0 type:(long long)a1 options:(long long)a2;
+ (id)actionsForScreenTwo:(long long)a0 type:(long long)a1;
+ (id)bulletsForScreenOneOver13:(long long)a0;
+ (id)bulletsForScreenOneUnder13:(long long)a0;
+ (id)bulletsForScreenTwoOver13:(long long)a0;
+ (id)bulletsForScreenTwoUnder13:(long long)a0;
+ (id)imageNameForScreen:(long long)a0;
+ (id)modelForScreen:(long long)a0 workflow:(long long)a1 type:(long long)a2;
+ (id)modelForScreen:(long long)a0 workflow:(long long)a1 type:(long long)a2 options:(long long)a3;
+ (id)titleForScreen:(long long)a0 workflow:(long long)a1;

- (void).cxx_destruct;

@end
