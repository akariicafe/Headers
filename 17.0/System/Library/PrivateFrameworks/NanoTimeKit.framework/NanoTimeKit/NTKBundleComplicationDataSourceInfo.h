@class NSString, NSNumber;

@interface NTKBundleComplicationDataSourceInfo : NSObject {
    unsigned long long _hash;
}

@property (readonly, nonatomic) Class dataSourceClass;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) NSString *localizedAppName;
@property (readonly, nonatomic) NSString *localizedComplicationName;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *appGroupIdentifier;
@property (readonly, nonatomic) NSNumber *legacyNTKComplicationType;
@property (readonly, nonatomic) BOOL useComplicationDescriptorsOnCompanion;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataSourceClass:(Class)a0;

@end
