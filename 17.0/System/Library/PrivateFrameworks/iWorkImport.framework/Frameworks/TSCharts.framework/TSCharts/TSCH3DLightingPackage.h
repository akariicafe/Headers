@class NSString, NSArray;

@interface TSCH3DLightingPackage : NSObject <TSSPropertyValueArchiving, NSCopying> {
    NSArray *_lights;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *localizedName;

+ (id)package;
+ (id)localizedNameForName:(id)a0;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)allNamedPackages;
+ (id)nameFromSageLightingPackageName:(id)a0;
+ (id)p_sageLightingPackageNames;
+ (id)packageFromName:(id)a0;
+ (id)packageWithSageLightingPackageData:(id)a0;
+ (id)sageNameFromLightingPackageName:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)addLight:(id)a0;
- (void)affect:(id)a0 states:(id)a1 scene:(id)a2 texturePool:(id)a3;

@end
