@class SGMEventBannerRejected, SGMContactDetailRejected, SGMUnknownContactInformationShown, SGMContactDetailConfirmed, SGMContactDetailUsed, SGMContactDetailConversationTurn, SGMEventInBanner, SGMContactInBanner, SGMContactRejected, SGMEventBannerConfirmed, SGMMaybeInformationShown, SGMContactConfirmed;

@interface SGSuggestedActionMetrics : NSObject

@property (retain, nonatomic) SGMContactInBanner *contactInBanner;
@property (retain, nonatomic) SGMContactConfirmed *contactConfirmed;
@property (retain, nonatomic) SGMContactRejected *contactRejected;
@property (retain, nonatomic) SGMContactDetailConfirmed *contactDetailConfirmed;
@property (retain, nonatomic) SGMContactDetailRejected *contactDetailRejected;
@property (retain, nonatomic) SGMContactDetailUsed *contactDetailUsed;
@property (retain, nonatomic) SGMEventInBanner *eventInBanner;
@property (retain, nonatomic) SGMEventBannerConfirmed *eventBannerConfirmed;
@property (retain, nonatomic) SGMEventBannerRejected *eventBannerRejected;
@property (retain, nonatomic) SGMMaybeInformationShown *maybeInformationShown;
@property (retain, nonatomic) SGMUnknownContactInformationShown *unknownContactInformationShown;
@property (retain, nonatomic) SGMContactDetailConversationTurn *contactDetailConversationTurn;

+ (id)instance;
+ (void)recordContactDetailUsage:(id)a0 withApp:(id)a1;
+ (void)recordBannerConfirmedWithContact:(id)a0 proposedCNContact:(id)a1 confirmedCNContact:(id)a2 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a3 confirmationUI:(int)a4 pet2Tracker:(id)a5;
+ (void)recordBannerConfirmedWithEvent:(id)a0 proposedEKEvent:(id)a1 confirmedEKEvent:(id)a2 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a3;
+ (void)recordBannerRejectedWithEvent:(id)a0 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a1;
+ (void)recordBannerShownWithContacts:(id)a0 events:(id)a1 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a2;
+ (void)recordContactDetailEngagementWithResolution:(long long)a0 detailType:(struct SGMContactDetailType_ { unsigned long long x0; })a1 extractionType:(unsigned long long)a2 modelVersion:(id)a3 confirmRejectUI:(int)a4 pet2Tracker:(id)a5;
+ (void)recordConversationTurnWithContact:(id)a0 received:(BOOL)a1 curated:(BOOL)a2 throughApp:(id)a3 withDetailName:(id)a4 withDetailExtraction:(id)a5;
+ (void)recordMaybeContactFrom:(unsigned long long)a0 withVersion:(id)a1;
+ (void)recordRejectedContact:(id)a0 inApp:(struct SGMBannerDisplayApp_ { unsigned long long x0; })a1 rejectionUI:(int)a2 pet2Tracker:(id)a3;

- (id)init;
- (void).cxx_destruct;

@end
