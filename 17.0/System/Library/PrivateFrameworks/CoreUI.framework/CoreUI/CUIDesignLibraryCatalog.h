@class NSString;

@interface CUIDesignLibraryCatalog : NSObject {
    unsigned long long _storageRef;
    NSString *_assetStoreName;
    id _colorCache[5][28];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property long long designSystem;
@property long long colorScheme;
@property long long contrast;
@property long long styling;

+ (id)_bundleNameForResolvedDesignSystem:(long long)a0;
+ (id)catalogForDesignSystem:(long long)a0 colorScheme:(long long)a1 contrast:(long long)a2 styling:(long long)a3 error:(id *)a4;
+ (id)_catalogPathComponentForDesignSystem:(long long)a0 colorScheme:(long long)a1 contrast:(long long)a2 styling:(long long)a3 error:(id *)a4;

- (void)dealloc;
- (id)colorWithName:(long long)a0 palette:(long long)a1 displayGamut:(long long)a2 error:(id *)a3;
- (id)_colorNameStringFromNameEnum:(long long)a0 palette:(long long)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (id)shapeEffectPresetWithName:(id)a0 error:(id *)a1;

@end
