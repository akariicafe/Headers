@class NSString;

@interface SBMirroringDisplayProfileFactory : NSObject <EXBDisplayProfileDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createProfile;
- (BOOL)displayProfile:(id)a0 shouldConnectToDisplay:(id)a1;

@end
