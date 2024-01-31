@class NSString;

@interface SRUIFDialogPhase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_type) long long type;
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary;
@property (readonly, nonatomic, getter=isExpository) BOOL expository;
@property (readonly, nonatomic, getter=isConfirmationDialogPhase) BOOL confirmationDialogPhase;
@property (readonly, nonatomic, getter=isReflectionDialogPhase) BOOL reflectionDialogPhase;
@property (readonly, nonatomic, getter=isClarificationDialogPhase) BOOL clarificationDialogPhase;
@property (readonly, nonatomic, getter=isConfirmedDialogPhase) BOOL confirmedDialogPhase;
@property (readonly, nonatomic, getter=isCancelledDialogPhase) BOOL cancelledDialogPhase;
@property (readonly, nonatomic, getter=isUserRequestDialogPhase) BOOL userRequestDialogPhase;
@property (readonly, nonatomic, getter=isErrorDialogPhase) BOOL errorDialogPhase;
@property (readonly, nonatomic, getter=isCompletionDialogPhase) BOOL completionDialogPhase;
@property (readonly, nonatomic, getter=isSummaryDialogPhase) BOOL summaryDialogPhase;
@property (readonly, nonatomic) NSString *aceDialogPhaseValue;

+ (id)_dialogPhaseWithType:(long long)a0;
+ (id)acknowledgementDialogPhase;
+ (id)cancelledDialogPhase;
+ (id)clarificationDialogPhase;
+ (id)completionDialogPhase;
+ (id)confirmationDialogPhase;
+ (id)confirmedDialogPhase;
+ (id)dialogPhaseForAceDialogPhase:(id)a0;
+ (id)errorDialogPhase;
+ (id)reflectionDialogPhase;
+ (id)statusDialogPhase;
+ (id)summaryDialogPhase;
+ (id)userRequestDialogPhase;

- (unsigned long long)hash;
- (id)_initWithType:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)replacesPreviousSnippetContents;
- (BOOL)isEqualToDialogPhase:(id)a0;
- (BOOL)isPossiblyPartOfMultiTurnRequest;

@end
