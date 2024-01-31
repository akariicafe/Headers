@class NSArray, NSString, NSDate;

@interface BMMomentsEngagementSuggestionEvent : BMEventBase <BMStoreData> {
    BOOL _hasRaw_timestamp;
    double _raw_timestamp;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSArray *fullBundleOrderedSet;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *viewContainerName;
@property (readonly, nonatomic) double viewVisibleTime;
@property (nonatomic) BOOL hasViewVisibleTime;
@property (readonly, nonatomic) NSString *suggestionType;
@property (readonly, nonatomic) int viewVisibleSuggestionsCount;
@property (nonatomic) BOOL hasViewVisibleSuggestionsCount;
@property (readonly, nonatomic) int viewTotalSuggestionsCount;
@property (nonatomic) BOOL hasViewTotalSuggestionsCount;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_fullBundleOrderedSetJSONArray;
- (id)initWithType:(int)a0 timestamp:(id)a1 fullBundleOrderedSet:(id)a2 clientIdentifier:(id)a3 viewContainerName:(id)a4 viewVisibleTime:(id)a5;
- (id)initWithType:(int)a0 timestamp:(id)a1 fullBundleOrderedSet:(id)a2 clientIdentifier:(id)a3 viewContainerName:(id)a4 viewVisibleTime:(id)a5 suggestionType:(id)a6 viewVisibleSuggestionsCount:(id)a7 viewTotalSuggestionsCount:(id)a8;

@end
