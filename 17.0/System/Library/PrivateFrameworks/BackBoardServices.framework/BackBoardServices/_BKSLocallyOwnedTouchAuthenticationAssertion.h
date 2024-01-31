@class NSString;

@interface _BKSLocallyOwnedTouchAuthenticationAssertion : NSObject <BSInvalidatable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;

@end
