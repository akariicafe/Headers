@class NSString;

@interface DummyWalrusStateController : NSObject <CDPWalrusStatusProvider, CDPWalrusStatusUpdater> {
    unsigned long long walrusStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
