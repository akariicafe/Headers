@class NSString;

@interface ICMentionsFilterTypeSelection : ICParticipantsFilterTypeSelection

@property (readonly, nonatomic) NSString *currentUserID;

- (id)filterName;
- (long long)filterType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)emptySummary;
- (id)emptySummaryTitle;
- (id)shortEmptySummary;
- (id)summaryWithJoinOperatorMenu;

@end
