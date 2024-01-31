@class NSString, NSMutableDictionary, SBSExternalDisplayService;

@interface SBExternalDisplayBiomeDonor : NSObject <SBSExternalDisplayServiceObserver>

@property (readonly, nonatomic) SBSExternalDisplayService *externalDisplayService;
@property (retain, nonatomic) NSMutableDictionary *biomeDonationTimers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)externalDisplayDidConnect:(id)a0;
- (void).cxx_destruct;
- (void)externalDisplayWillDisconnect:(id)a0;
- (void)_donateToBiomeIfNecessaryForDisplayInfo:(id)a0 connect:(BOOL)a1;

@end
