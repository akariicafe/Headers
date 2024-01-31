@class NSString;
@protocol SXSubscriptionButtonTextProviding;

@interface SXSubscriptionButtonComponentTextProvider : NSObject <SXButtonComponentTextProvider>

@property (readonly, nonatomic) id<SXSubscriptionButtonTextProviding> textProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTextProvider:(id)a0;
- (id)textForComponent:(id)a0;

@end
