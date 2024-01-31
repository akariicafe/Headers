@class NSString, NSArray, ATXActivity;

@interface ATXActivitySuggestion : NSObject <ATXActivitySuggestion>

@property (readonly, nonatomic) ATXActivity *activity;
@property (readonly, copy, nonatomic) NSString *uuidString;
@property (readonly, nonatomic) unsigned long long location;
@property (readonly, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) NSString *suggestionUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithActivity:(id)a0;
- (BOOL)isEqualToATXActivitySuggestion:(id)a0;

@end
