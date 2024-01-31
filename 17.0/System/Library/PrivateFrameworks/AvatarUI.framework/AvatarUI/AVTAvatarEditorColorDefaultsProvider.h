@class NSDictionary, AVTEditingModelColors;

@interface AVTAvatarEditorColorDefaultsProvider : NSObject <NSCopying>

@property (retain, nonatomic) AVTEditingModelColors *editingColors;
@property (retain, nonatomic) NSDictionary *categoryMapping;
@property (retain, nonatomic) NSDictionary *definitions;

+ (long long)categoryForKey:(id)a0;
+ (long long)colorIndexForKey:(id)a0;
+ (id)keyForCategory:(long long)a0 colorIndex:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)defaultColorForCategory:(long long)a0 destination:(long long)a1 withConfiguration:(id)a2;
- (id)defaultColorPresetForCategory:(long long)a0 destination:(long long)a1 withConfiguration:(id)a2;
- (id)initWithColorDefaultsDictionary:(id)a0 editingColors:(id)a1;

@end
