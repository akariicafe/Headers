@class NSString, NSArray, NSDate;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject

@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) NSDate *notSeenSinceDate;
@property (readonly, nonatomic) unsigned long long relationshipScore;

- (void).cxx_destruct;
- (id)initWithPersonLocalIdentifier:(id)a0 assets:(id)a1 notSeenSinceDate:(id)a2;
- (id)initWithPersonLocalIdentifier:(id)a0 assets:(id)a1 relationshipScore:(unsigned long long)a2;

@end
