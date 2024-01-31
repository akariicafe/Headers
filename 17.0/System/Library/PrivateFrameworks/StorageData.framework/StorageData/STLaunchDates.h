@class NSMutableDictionary, NSDate;

@interface STLaunchDates : NSObject

@property (retain) NSMutableDictionary *launchDatesByApp;
@property (retain) NSDate *latestDate;

+ (id)sharedDates;

- (void)load;
- (id)init;
- (void).cxx_destruct;
- (void)refreshDates;
- (void)_writeDatesPref:(id)a0;
- (void)addBiomeDates;
- (void)addSpotlightDates;
- (id)launchDateForApp:(id)a0;
- (void)readDatesPref;
- (void)updateDates:(id)a0;
- (void)writeDatesPref;

@end
