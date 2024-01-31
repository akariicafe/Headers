@class NSString;

@interface FCMagazineGenre : NSObject <NSCopying>

@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *localizedDescription;

+ (id)magazineGenreWithGenre:(id)a0 localizedDescription:(id)a1;

- (id)initWithConfigDictionary:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGenre:(id)a0 localizedDescription:(id)a1;

@end
