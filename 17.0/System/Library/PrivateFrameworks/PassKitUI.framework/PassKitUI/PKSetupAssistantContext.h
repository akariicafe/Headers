@class NSData, NSString;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKSetupAssistantContext : NSObject <PKPaymentSetupAssistantContextProtocol>

@property (nonatomic) unsigned long long setupAssistant;
@property (nonatomic) BOOL allowsCachedCardRequirements;
@property (readonly, nonatomic) BOOL isFollowupAction;
@property (retain, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSetupAssistant:(unsigned long long)a0;
- (void)extendableDescription:(id)a0;
- (id)initWithSetupAssistantAsFollowupAction:(unsigned long long)a0;
- (void)prepareForFollowupQueryWithHandler:(id /* block */)a0;

@end
