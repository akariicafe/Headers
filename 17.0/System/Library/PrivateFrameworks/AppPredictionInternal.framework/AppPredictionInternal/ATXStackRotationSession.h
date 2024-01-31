@class ATXHomeScreenEvent, NSString, ATXSuggestionLayout, NSMutableArray, NSDate;

@interface ATXStackRotationSession : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXHomeScreenEvent *startingStackChangeEvent;
@property (readonly, nonatomic) ATXHomeScreenEvent *endingStackChangeEvent;
@property (nonatomic) unsigned long long engagementStatus;
@property (readonly, nonatomic) NSMutableArray *engagementStatusHistory;
@property (readonly, nonatomic) ATXSuggestionLayout *systemSuggestSuggestionLayout;
@property (retain, nonatomic) NSDate *dwellStartDate;
@property (nonatomic) double longestDwell;
@property (nonatomic) BOOL isNPlusOneRotation;
@property (nonatomic) BOOL isFirstNPlusOneRotation;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) NSString *rotationReason;
@property (readonly, nonatomic) NSString *widgetUniqueId;
@property (readonly, nonatomic) NSString *widgetBundleId;
@property (readonly, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) NSString *blendingCacheId;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) int stackLocation;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)markStackTapped;
- (void)markStackHiddenAtDate:(id)a0;
- (void)markStackShownAtDate:(id)a0;
- (void)updateWithSystemSuggestSuggestionLayout:(id)a0;
- (void)markRejectedRotationDismissOnce;
- (void)finalizeWithEndingStackChangeEvent:(id)a0;
- (id)initWithStartingStackChangeEvent:(id)a0;
- (id)initWithStartingStackChangeEvent:(id)a0 endingStackChangeEvent:(id)a1 engagementStatus:(unsigned long long)a2 engagementStatusHistory:(id)a3 systemSuggestSuggestionLayout:(id)a4 dwellStartDate:(id)a5 longestDwell:(double)a6 isNPlusOneRotation:(BOOL)a7 isFirstNPlusOneRotation:(BOOL)a8 completed:(BOOL)a9;
- (BOOL)isEqualToATXStackRotationSession:(id)a0;
- (void)markAddedToStack;
- (void)markRejectedRotationNeverShowAgain;
- (void)tryUpdateStackRotationEngagementStatus:(unsigned long long)a0;
- (void)updateIsNPlusOneRotation:(BOOL)a0 isFirstNPlusOneRotation:(BOOL)a1;

@end
