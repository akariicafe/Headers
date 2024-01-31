@class QSSShortcutFuzzyMatchRequest_StringTokenPair, NSArray, NSString;

@interface QSSMutableShortcutFuzzyMatchRequest : QSSShortcutFuzzyMatchRequest

@property (copy, nonatomic) QSSShortcutFuzzyMatchRequest_StringTokenPair *utterance;
@property (copy, nonatomic) NSArray *shortcuts;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *session_id;
@property (copy, nonatomic) NSString *interaction_id;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *device_type;
@property (copy, nonatomic) NSString *context;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
