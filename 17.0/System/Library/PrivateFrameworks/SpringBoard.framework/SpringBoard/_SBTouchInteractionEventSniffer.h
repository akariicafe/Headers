@class NSString, SBWindowScene;
@protocol _SBTouchInteractionEventSnifferDelegate;

@interface _SBTouchInteractionEventSniffer : NSObject <_SBEventSniffing>

@property (weak, nonatomic) id<_SBTouchInteractionEventSnifferDelegate> delegate;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleEvent:(id)a0;

@end
