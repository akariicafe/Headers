@class NSDictionary;

@interface WLKSiriBestPlayablesResponse : NSObject

@property (copy, nonatomic) NSDictionary *playablesByID;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)playableForStatsID:(id)a0;

@end
