@class NSString, NSArray;

@interface ATXActivity : NSObject

@property (readonly, nonatomic) BOOL allowsSmartEntry;
@property (readonly, nonatomic) long long origin;
@property (readonly, copy, nonatomic) NSString *originBundleId;
@property (readonly, copy, nonatomic) NSString *originAnchorType;
@property (readonly, copy, nonatomic) NSString *userModeName;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *modeUUID;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) BOOL shouldSuggestTriggers;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly, nonatomic) NSString *localizedSuggestionReason;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_anchorSuggestionReasonLocalizationKey;
- (id)_heuristicSuggestionReasonLocalizationKey;
- (id)_suggestionReasonLocalizationKey;
- (id)initWithBMInferredModeEvent:(id)a0;
- (id)initWithModeUUID:(id)a0 userModeName:(id)a1 activityType:(unsigned long long)a2 origin:(long long)a3 originBundleId:(id)a4 originAnchorType:(id)a5 allowsSmartEntry:(BOOL)a6 suggestionUUID:(id)a7 triggers:(id)a8 location:(unsigned long long)a9 shouldSuggestTriggers:(BOOL)a10;
- (BOOL)isEqualToATXActivity:(id)a0;

@end
