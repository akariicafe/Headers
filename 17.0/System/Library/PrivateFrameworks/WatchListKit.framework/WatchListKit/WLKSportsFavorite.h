@class NSString, NSDictionary;

@interface WLKSportsFavorite : NSObject <WLKSportsFavoriteRepresentable>

@property (readonly, copy, nonatomic) NSString *abbreviation;
@property (readonly, copy, nonatomic) NSString *backgroundColor;
@property (readonly, copy, nonatomic) NSString *ID;
@property (readonly, nonatomic) BOOL isHome;
@property (readonly, copy, nonatomic) NSString *leagueId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSDictionary *images;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithID:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
