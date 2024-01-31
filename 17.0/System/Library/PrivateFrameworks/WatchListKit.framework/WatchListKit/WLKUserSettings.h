@class NSString;

@interface WLKUserSettings : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL activeUser;
@property (readonly, nonatomic) BOOL ageVerified;
@property (readonly, copy, nonatomic) NSString *country;
@property (readonly, nonatomic) BOOL favoritesSyncEnabled;
@property (readonly, nonatomic) BOOL globalAccountConsent;

- (id)_data;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_jsonDictionary;
- (id)initWithFavoritesSyncEnabled:(BOOL)a0;

@end
