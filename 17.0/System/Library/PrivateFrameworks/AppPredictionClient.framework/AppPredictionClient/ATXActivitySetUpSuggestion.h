@class NSArray, NSString, ATXActivity;

@interface ATXActivitySetUpSuggestion : NSObject <ATXActivitySuggestion>

@property (readonly, nonatomic) ATXActivity *activity;
@property (readonly, nonatomic) unsigned long long activityType;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly, nonatomic) BOOL allowsSetUpWithoutConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithActivity:(id)a0;
- (BOOL)isEqualToATXActivitySetUpSuggestion:(id)a0;

@end
