@class NSUUID;

@interface NTKComplicationDataSourceCacheKey : NSObject <NSCopying>

@property (retain, nonatomic) NSUUID *nrDeviceUUID;
@property (nonatomic) unsigned long long complicationType;
@property (nonatomic) long long complicationFamily;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
