@class NSString;

@interface CACContextCluesPresentationManager : CACSimpleContentViewManager <CACContextCluesDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isOverlay;
- (void)contextCludesDidPressDoneButton;
- (void)showWithCommands:(id)a0;

@end
