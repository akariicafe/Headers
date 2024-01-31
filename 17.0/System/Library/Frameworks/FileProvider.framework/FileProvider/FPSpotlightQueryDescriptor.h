@class NSString, FPQueryEnumerationSettings, CSSearchQuery;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {
    CSSearchQuery *_searchQuery;
}

@property (readonly, nonatomic) FPQueryEnumerationSettings *settings;
@property (readonly, nonatomic) NSString *name;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)augmentQueryContext:(id)a0;
- (unsigned long long)desiredCount;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;
- (BOOL)keepCollectorsAlive;
- (id)queryStringForMountPoint:(id)a0;
- (BOOL)supportsQueryingAllMountPoints;

@end
