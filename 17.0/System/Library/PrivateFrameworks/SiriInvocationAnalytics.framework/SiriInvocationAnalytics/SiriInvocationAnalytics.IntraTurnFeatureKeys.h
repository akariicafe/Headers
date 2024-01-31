@class NSString;

@interface SiriInvocationAnalytics.IntraTurnFeatureKeys : NSObject

@property (class, nonatomic, readonly) NSString *UEI_REQUEST_STATUS;
@property (class, nonatomic, readonly) NSString *UEI_CAT_ID_KEY;
@property (class, nonatomic, readonly) NSString *UEI_HAS_PUNCHOUT;
@property (class, nonatomic, readonly) NSString *UEI_PUNCHOUT_APP;
@property (class, nonatomic, readonly) NSString *UEI_PUNCHOUT_UI;
@property (class, nonatomic, readonly) NSString *UEI_CAT_ID_SEQUENCE_KEY;
@property (class, nonatomic, readonly) NSString *VALID_DICTATION_TURN_KEY;
@property (class, nonatomic, readonly) NSString *VALID_TURN_DICTATION_PRODUCT_KEY;
@property (class, nonatomic, readonly) NSString *VALID_TURN_DICTATION_SUCCESS_KEY;
@property (class, nonatomic, readonly) NSString *VALID_ASSISTANT_TURN_KEY;
@property (class, nonatomic, readonly) NSString *VALID_TURN_CONTAINS_UUFR;
@property (class, nonatomic, readonly) NSString *VALID_TURN_ORCH_ENDED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_PUNCH_OUT;
@property (class, nonatomic, readonly) NSString *VALID_TURN_IS_INTERACTIVE_SNIPPET_TURN;
@property (class, nonatomic, readonly) NSString *VALID_TURN_IS_SIRI_TRIGGERLESS;
@property (class, nonatomic, readonly) NSString *VALID_TURN_UEI_REQUEST_STATUS_FAILED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_ORCH_REQUEST_CANCELLED_MITIGATED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_ASR_CANCELLED;
@property (class, nonatomic, readonly) NSString *VALID_TURN_ANNOUNCE_TURN;

- (id)init;
- (void).cxx_destruct;

@end
