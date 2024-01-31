@class GDGraphSongEventEntityIdentifier, NSDate;

@interface GDAppleMusicEventGraphSongEventEntry : NSObject

@property (readonly, copy, nonatomic) GDGraphSongEventEntityIdentifier *entityIdentifier;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (id)initWithEntityIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
