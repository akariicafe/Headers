@class NSString, UIColor, NSMutableDictionary;

@interface _UICoreUICatalogColorWrapper : NSObject <NSCoding> {
    NSString *_nibLoadingBundleID;
    NSMutableDictionary *_colorCache;
    BOOL _hasLoggedFailure;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) UIColor *fallbackColor;
@property (readonly, nonatomic) UIColor *color;

- (unsigned long long)hash;
- (id)bundle;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_uikit_variesByTraitCollections;
- (id)_uikit_valueForTraitCollection:(id)a0;
- (void)setCachedColor:(id)a0 forDisplayGamut:(long long)a1;
- (id)cachedColorForDisplayGamut:(long long)a0;
- (struct CGColor { } *)cgColorForTraitCollection:(id)a0;
- (id)colorCache;
- (id)initWithName:(id)a0 bundleID:(id)a1 fallbackColor:(id)a2;
- (BOOL)isEqualToCoreUICatalogColor:(id)a0;
- (id)nibLoadingBundle;

@end
