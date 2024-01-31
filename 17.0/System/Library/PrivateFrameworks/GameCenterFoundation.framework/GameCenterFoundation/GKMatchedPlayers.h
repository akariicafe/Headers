@class NSDictionary, NSArray;

@interface GKMatchedPlayers : NSObject

@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) NSArray *players;
@property (readonly, nonatomic) NSDictionary *playersProperties;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMatch:(id)a0 players:(id)a1;

@end
