@class NSString;

@interface MRNowPlayingControllerHelper : NSObject <MRNowPlayingControllerDelegate>

@property (copy, nonatomic) id /* block */ didLoadResponse;
@property (copy, nonatomic) id /* block */ playbackStateDidChange;
@property (copy, nonatomic) id /* block */ playbackRateDidChange;
@property (copy, nonatomic) id /* block */ playbackQueueDidChange;
@property (copy, nonatomic) id /* block */ contentItemsDidUpdate;
@property (copy, nonatomic) id /* block */ contentItemsDidLoadArtwork;
@property (copy, nonatomic) id /* block */ supportedCommandsDidChange;
@property (copy, nonatomic) id /* block */ playerLastPlayingDateDidChange;
@property (copy, nonatomic) id /* block */ clientPropertiesDidChange;
@property (copy, nonatomic) id /* block */ playerPathDidChange;
@property (copy, nonatomic) id /* block */ didInvalidate;
@property (copy, nonatomic) id /* block */ didFailWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controller:(id)a0 playbackStateDidChangeFrom:(unsigned int)a1 to:(unsigned int)a2;
- (void)controller:(id)a0 supportedCommandsDidChangeFrom:(id)a1 to:(id)a2;
- (void)controller:(id)a0 contentItemsDidUpdateWithContentItemChanges:(id)a1;
- (void)controller:(id)a0 didLoadResponse:(id)a1;
- (void)controller:(id)a0 clientPropertiesDidChangeFrom:(id)a1 to:(id)a2;
- (void)controller:(id)a0 playerLastPlayingDateDidChange:(id)a1;
- (void)controller:(id)a0 didLoadArtworkForContentItems:(id)a1;
- (void)controller:(id)a0 playerPathDidChange:(id)a1;
- (void).cxx_destruct;
- (void)controller:(id)a0 playbackQueueDidChangeFrom:(id)a1 to:(id)a2;
- (void)controllerWillReloadForInvalidation:(id)a0;
- (void)controller:(id)a0 didFailWithError:(id)a1;
- (void)controller:(id)a0 playbackRateDidChangeFrom:(float)a1 to:(float)a2;

@end
