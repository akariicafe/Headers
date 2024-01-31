@class NSString;

@interface SWSystemSleepAssertionProvider : NSObject <SWSystemSleepAssertionProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedProvider;

- (id)acquirePreventSystemSleepAssertionWithIdentifier:(id)a0;
- (id)acquireSystemActivityAssertionWithIdentifier:(id)a0;

@end
