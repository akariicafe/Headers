@class NSString;

@interface _TtCO10PodcastsUI6Legacy17JSLocalizerObject : NSObject <_TtP10PodcastsUIP33_B58A2DE32A65E45040B93B81BE0F454517JSLocalizerExport_> {
    void /* unknown type, empty encoding */ bundle;
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ preferredLocalization;
    void /* unknown type, empty encoding */ dateFormatters;
    void /* unknown type, empty encoding */ dateIntervalFormatters;
}

@property (nonatomic, readonly) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (id)string:(id)a0;
- (id)duration:(double)a0;
- (id)formattedCount:(id)a0;
- (id)formatDate:(id)a0 :(id)a1;
- (id)stringWithCount:(id)a0 :(long long)a1;
- (id)timeAgo:(id)a0;
- (id)decimal:(id)a0 :(long long)a1 :(long long)a2;
- (id)duration:(double)a0 abbreviated:(BOOL)a1;
- (id)friendlyDate:(id)a0;
- (id)timeRange:(id)a0 :(id)a1 :(id)a2;
- (id)timeRangeWithFormat:(id)a0 :(id)a1 :(id)a2 :(id)a3;

@end
