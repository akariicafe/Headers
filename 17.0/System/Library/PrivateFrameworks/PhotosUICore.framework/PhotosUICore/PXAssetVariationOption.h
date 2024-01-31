@class NSString;

@interface PXAssetVariationOption : NSObject <NSCopying>

@property (readonly, nonatomic) long long variationType;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isRecommended) BOOL recommended;
@property (readonly, nonatomic, getter=isCurrent) BOOL current;

+ (id)_localizedNameForVariationType:(long long)a0;
+ (id)variationOptionWithType:(long long)a0 recommended:(BOOL)a1 current:(BOOL)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToVariationOption:(id)a0;

@end
