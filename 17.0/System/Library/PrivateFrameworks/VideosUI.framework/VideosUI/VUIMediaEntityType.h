@interface VUIMediaEntityType : NSObject <NSCopying>

@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long mediaCategoryType;
@property (nonatomic) unsigned long long mediaCollectionType;
@property (nonatomic, getter=isRental) BOOL rental;

+ (id)show;
+ (id)episode;
+ (id)movie;
+ (id)season;
+ (id)homeVideo;
+ (id)movieRental;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringDescription;
- (id)_initWithMediaCollectionType:(unsigned long long)a0 mediaCategoryType:(unsigned long long)a1;
- (id)_initWithMediaItemCategoryType:(unsigned long long)a0 isRental:(BOOL)a1;

@end
