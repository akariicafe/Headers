@interface PLPhotoEditImportProperties : NSObject

@property (readonly, nonatomic) long long baseEXIFOrientation;
@property (readonly, nonatomic) double baseDuration;

+ (id)importPropertiesWithEXIFOrientation:(long long)a0 duration:(double)a1;
+ (id)importPropertiesWithEXIFOrientation:(long long)a0;

@end
