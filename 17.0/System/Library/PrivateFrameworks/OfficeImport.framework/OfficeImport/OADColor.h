@class NSMutableArray;

@interface OADColor : NSObject <NSCopying> {
    NSMutableArray *mTransforms;
}

+ (float)alphaWithColor:(id)a0;
+ (id)basicMapOfColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)mapAdjustedColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (int)mapSchemeColorID:(int)a0 colorMap:(id)a1;
+ (id)rgbColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)tsuColorWithColor:(id)a0 colorMap:(id)a1 colorScheme:(id)a2 colorPalette:(id)a3;
+ (id)tsuColorWithRed:(float)a0 green:(float)a1 blue:(float)a2;
+ (id)tsuColorWithRgbColor:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)transforms;
- (void)setTransforms:(id)a0;
- (void)addTransform:(id)a0;
- (void)addTransformOfType:(int)a0;
- (void)addTransformOfType:(int)a0 value:(float)a1;
- (id)colorForStyleColor:(id)a0;

@end
