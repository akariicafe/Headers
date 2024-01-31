@class NSString, SiriAnalyticsClientMessageStream;

@interface SASActivationInstrumentationSender : NSObject <SASActivationInstrumentationSending> {
    SiriAnalyticsClientMessageStream *_analyticsStream;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_clientEventWithActivationEventIdentifier:(id)a0;
- (id)initWithAnalyticsStream:(id)a0;
- (void)instrumentActivationMessage:(id)a0;
- (void)instrumentButtonInteractionType:(int)a0 buttonIdentifier:(id)a1 activationEventIdentifier:(id)a2;
- (void)instrumentTurnActivatedWithTurnId:(id)a0 activationEventIdentifier:(id)a1;

@end
