@class NSDate, ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata, NSMutableArray, ATXSuggestionLayout;

@interface ATXProactiveSuggestionWidgetRotationFeedbackSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long engagementType;
@property (readonly, nonatomic) ATXProactiveSuggestionWidgetRotationFeedbackSessionMetadata *metadata;
@property (readonly, nonatomic) NSMutableArray *engagementHistory;
@property (readonly, nonatomic) ATXSuggestionLayout *systemSuggestSuggestionLayout;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) NSDate *dwellStartDate;
@property (readonly, nonatomic) double longestDwell;

- (id)init;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)markStackTapped;
- (id)initWithEngagementType:(long long)a0 metadata:(id)a1 engagementHistory:(id)a2 systemSuggestSuggestionLayout:(id)a3 sessionStartDate:(id)a4 sessionEndDate:(id)a5 dwellStartDate:(id)a6 longestDwell:(double)a7;
- (BOOL)isEqualToATXProactiveSuggestionWidgetRotationFeedbackSession:(id)a0;
- (void)markRotationSessionEndedAtDate:(id)a0 wasUserScroll:(BOOL)a1;
- (void)markRotationSessionStartedAtDate:(id)a0;
- (void)markStackHiddenAtDate:(id)a0;
- (void)markStackShownAtDate:(id)a0;
- (void)tryUpdateStackRotationEngagementType:(long long)a0;
- (void)updateSessionMetadata:(id)a0;
- (void)updateWithSystemSuggestSuggestionLayout:(id)a0;

@end
