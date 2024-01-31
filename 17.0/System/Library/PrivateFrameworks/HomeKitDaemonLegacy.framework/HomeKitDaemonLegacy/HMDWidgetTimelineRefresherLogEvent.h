@class NSString;

@interface HMDWidgetTimelineRefresherLogEvent : HMMLogEvent

@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)initWithKind:(id)a0 reason:(id)a1;

@end
