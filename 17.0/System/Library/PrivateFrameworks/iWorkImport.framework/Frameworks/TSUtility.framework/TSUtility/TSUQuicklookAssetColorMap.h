@class NSString, NSMutableDictionary;

@interface TSUQuicklookAssetColorMap : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetMap;
@property (retain, nonatomic) NSString *appAssetPath;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)quicklookAssetMap;
+ (id)colorForResource:(id)a0;
+ (BOOL)hasAppAssets;
+ (id)locatorForSageChartTextureSet:(id)a0 image:(id)a1;

- (id)retain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)autorelease;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
