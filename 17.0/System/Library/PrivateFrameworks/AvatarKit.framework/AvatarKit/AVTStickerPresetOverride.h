@class NSString, NSArray;

@interface AVTStickerPresetOverride : NSObject

@property (readonly, nonatomic) long long category;
@property (readonly, copy, nonatomic) NSString *presetIdentifier;
@property (readonly, nonatomic) NSArray *unlessIdentifiers;

+ (id)presetOverrideFromDictionary:(id)a0 forCategoryName:(id)a1;

- (void).cxx_destruct;
- (void)applyToAvatar:(id)a0 reversionContext:(id)a1;
- (id)initWithCategory:(long long)a0 presetIdentifier:(id)a1 unless:(id)a2;

@end
