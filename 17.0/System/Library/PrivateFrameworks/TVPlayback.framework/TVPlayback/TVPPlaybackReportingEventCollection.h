@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface TVPPlaybackReportingEventCollection : NSObject

@property (retain, nonatomic) NSMutableArray *eventArray;
@property (retain, nonatomic) NSMutableDictionary *openEvents;
@property (nonatomic) long long videoType;
@property (nonatomic) BOOL isDownloaded;
@property (nonatomic) BOOL isGroupActivity;
@property (nonatomic) BOOL isGroupActivityOriginator;
@property (nonatomic) BOOL complete;
@property (nonatomic) BOOL initialFPSRequestsComplete;
@property (readonly, nonatomic) NSDictionary *rtcReportingEventDict;

+ (void)initialize;
+ (double)_totalTimeSpentDoingFPSFetchesFromEndEvents:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addEndEventWithName:(id)a0 identifier:(id)a1;
- (void)addEndEventWithName:(id)a0;
- (void)addEndEventWithName:(id)a0 identifier:(id)a1 timestamp:(id)a2;
- (void)addOrReplaceStartEventWithName:(id)a0 date:(id)a1;
- (void)addSingleShotEventWithName:(id)a0 value:(id)a1;
- (void)addStartEventWithName:(id)a0;
- (void)addStartEventWithName:(id)a0 identifier:(id)a1;
- (void)addStartEventWithName:(id)a0 isUIInteraction:(BOOL)a1;
- (void)_addEventWithName:(id)a0 type:(long long)a1 identifier:(id)a2 value:(id)a3 timestamp:(id)a4 forceAdd:(BOOL)a5 isUIInteraction:(BOOL)a6;
- (void)_closeOpenEvents;
- (void)_setError:(id)a0 inEventDict:(id)a1 errorCodeKey:(id)a2 errorDomainKey:(id)a3;
- (BOOL)containsEventWithName:(id)a0;

@end
