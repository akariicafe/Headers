@class _TtC18PodcastsFoundation11SiriDonator;

@interface MTSiriPlistDumper : NSObject

@property (readonly, retain, nonatomic) _TtC18PodcastsFoundation11SiriDonator *siriDonator;

- (void).cxx_destruct;
- (id)_childFromPlistAtIndex:(long long)a0 plistArray:(id)a1;
- (id)createDiffWithAddedPodcasts:(id)a0 addedStations:(id)a1 removedPodcasts:(id)a2 removedStations:(id)a3;
- (void)dumpPlist;
- (id)initWithAccountController:(id)a0 backgroundTaskManager:(id)a1;
- (id)subtractDictionary:(id)a0 fromDictionary:(id)a1 uniqueKey:(id)a2;
- (void)writeDiffs:(id)a0 stationItems:(id)a1 existingPodcastItems:(id)a2 existingStationItems:(id)a3;

@end
