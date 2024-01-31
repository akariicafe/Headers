@class NSString;

@interface BYRunState : NSObject <BYRunState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasCompletedInitialRun;

@end
