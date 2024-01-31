@class NSString;

@interface _WFInvalidatedState : NSObject <WFState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canTransitionToState:(id)a0;

@end
