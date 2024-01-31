@class NSString;

@interface WLKFavorite : NSObject

@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *leagueID;
@property (readonly, nonatomic) NSString *id;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 name:(id)a1 leagueID:(id)a2;

@end
