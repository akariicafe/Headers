@class NSError, NSUUID, NSArray, NSDate, NSString, NSData, ATXAction, NSIndexSet;

@interface ATXActionResponse : NSObject <NSSecureCoding> {
    NSIndexSet *_shownActionIndices;
    NSIndexSet *_explicitlyDismissedActionIndices;
    NSArray *_shownActionsCache;
    BOOL _containsRouteInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *scoredActions;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSUUID *blendingModelUICacheUpdateUUID;
@property (readonly, nonatomic) NSArray *proactiveSuggestions;
@property (readonly, nonatomic) NSDate *predictionDate;
@property (readonly, nonatomic) unsigned char consumerSubType;
@property (readonly, nonatomic) ATXAction *engagedAction;
@property (readonly, nonatomic) NSArray *shownActions;
@property (readonly, nonatomic) NSArray *explicitlyDismissedActions;
@property (readonly, nonatomic) unsigned long long feedbackStage;
@property (readonly, nonatomic) NSDate *uiFeedbackDate;
@property (readonly, nonatomic) ATXAction *matchingIntentDonatedAction;
@property (readonly, nonatomic) BOOL matchingIntentWasCompleteMatch;
@property (readonly, nonatomic) NSDate *donatedIntentDate;
@property (readonly, nonatomic) unsigned long long searchedActionType;
@property (readonly, nonatomic) NSString *engagedAppString;
@property (readonly, nonatomic) NSData *cacheFileData;
@property (readonly, nonatomic) NSError *error;

- (id)initWithProactiveSuggestions:(id)a0 blendingModelUICacheUpdateUUID:(id)a1 consumerSubType:(unsigned char)a2 error:(id)a3;
- (unsigned long long)hash;
- (void)updateConsumerSubType:(unsigned char)a0 engagedAction:(id)a1 shownActions:(id)a2 feedbackStage:(unsigned long long)a3 explicitlyDismissedActions:(id)a4 searchedActionType:(unsigned long long)a5 engagedAppString:(id)a6 uiFeedbackDate:(id)a7;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToActionResponse:(id)a0;
- (id)routeDestinationTypeString;
- (id)json;
- (void).cxx_destruct;
- (void)updateWithMatchingIntentDonatedAction:(id)a0 intentDonationDate:(id)a1 matchingIntentWasCompleteMatch:(BOOL)a2;
- (id)initWithScoredActions:(id)a0 cacheFileData:(id)a1 consumerSubType:(unsigned char)a2 error:(id)a3;
- (BOOL)indexWasShown:(unsigned long long)a0;
- (void)setContainsExternalRoute:(BOOL)a0;
- (BOOL)containsExternalRoute;
- (id)jsonDescription;
- (BOOL)isEqual:(id)a0;
- (id)jsonData;
- (BOOL)isActionSpotlightCaptureRateAppEngagementType;
- (id)initWithScoredActions:(id)a0 cacheFileData:(id)a1 proactiveSuggestions:(id)a2 blendingModelUICacheUpdateUUID:(id)a3 consumerSubType:(unsigned char)a4 predictionDate:(id)a5 error:(id)a6;
- (id)initWithCoder:(id)a0;

@end
