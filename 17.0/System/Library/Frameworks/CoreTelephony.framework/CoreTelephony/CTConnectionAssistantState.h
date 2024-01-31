@class CTCAServiceIntervals, CTCALocationState, CTCAConnectionState, CTCAConnectionClosedState, CTCAConversationState, CTCARoadsideConversationState, CTCATarget, NSString, CTCASilenceInterval, CTStewieState, NSArray, CTCATargetVisibility, CTCATryOutState;

@interface CTConnectionAssistantState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) CTStewieState *stewieState;
@property (nonatomic) long long internetInterface;
@property (retain, nonatomic) CTCATarget *currentTarget;
@property (retain, nonatomic) NSArray *backupTargets;
@property (retain, nonatomic) CTCATargetVisibility *targetVisibility;
@property (retain, nonatomic) CTCALocationState *locationState;
@property (retain, nonatomic) CTCAServiceIntervals *serviceIntervals;
@property (retain, nonatomic) CTCASilenceInterval *silenceInterval;
@property (retain, nonatomic) CTCAConnectionState *connectionState;
@property (retain, nonatomic) CTCAConversationState *conversationState;
@property (retain, nonatomic) CTCARoadsideConversationState *roadsideConversationState;
@property (retain, nonatomic) NSString *iso3166Alpha3CountryCode;
@property (retain, nonatomic) CTCAConnectionClosedState *connectionClosedState;
@property (retain, nonatomic) CTCATryOutState *tryOutState;
@property (nonatomic) BOOL isEmergencyVoiceCallCapable;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
