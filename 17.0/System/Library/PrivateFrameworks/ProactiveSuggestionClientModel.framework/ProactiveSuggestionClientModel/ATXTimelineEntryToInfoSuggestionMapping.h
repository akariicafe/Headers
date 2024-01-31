@class NSString, ATXInfoTimelineEntry;

@interface ATXTimelineEntryToInfoSuggestionMapping : NSObject

@property (readonly, nonatomic) NSString *suggestionId;
@property (readonly, nonatomic) ATXInfoTimelineEntry *timelineEntry;
@property (readonly, nonatomic) long long suggestionMappingReason;

+ (id)entryMappingWithTimelineEntry:(id)a0 suggestionId:(id)a1 withSuggestionMappingReason:(long long)a2;

- (id)init;
- (id)initWithTimelineEntry:(id)a0 suggestionId:(id)a1 withSuggestionMappingReason:(long long)a2;
- (void).cxx_destruct;

@end
