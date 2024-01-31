@class NSString, NSArray;

@interface QSSMutableShortcutFuzzyMatchRequest_StringTokenPair : QSSShortcutFuzzyMatchRequest_StringTokenPair

@property (copy, nonatomic) NSString *raw_string;
@property (copy, nonatomic) NSArray *tokens;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
