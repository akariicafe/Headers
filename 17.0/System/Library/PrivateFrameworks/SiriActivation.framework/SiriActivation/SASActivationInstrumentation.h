@class NSUUID;
@protocol SASActivationInstrumentationSending;

@interface SASActivationInstrumentation : NSObject {
    id<SASActivationInstrumentationSending> _instrumentationSender;
}

@property (retain) NSUUID *activationEventIdentifier;

- (void).cxx_destruct;
- (id)initWithSender:(id)a0;
- (void)_instrumentButtonInteractionType:(int)a0 buttonIdentifier:(id)a1;
- (id)buttonDownWithIdentifier:(id)a0;
- (id)buttonTapWithIdentifier:(id)a0 associateWithButtonDown:(BOOL)a1;
- (id)buttonUpWithIdentifier:(id)a0;
- (id)mostRecentAtivationEvenIdentifier;

@end
