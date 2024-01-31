@class NSString, SBWindowScene;
@protocol _SBPointerInteractionEventSnifferDelegate;

@interface _SBPointerInteractionEventSniffer : NSObject <_SBEventSniffing>

@property (weak, nonatomic) id<_SBPointerInteractionEventSnifferDelegate> delegate;
@property (weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleEvent:(id)a0;

@end
