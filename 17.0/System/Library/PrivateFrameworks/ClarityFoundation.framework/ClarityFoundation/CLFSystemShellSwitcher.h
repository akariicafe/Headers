@interface CLFSystemShellSwitcher : NSObject

@property (class, readonly, nonatomic) CLFSystemShellSwitcher *sharedSystemShellSwitcher;

@property (nonatomic, getter=isClarityBoardEnabled) BOOL clarityBoardEnabled;

- (id)_directoryURL;
- (BOOL)setClarityBoardEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)_createFileWithError:(id *)a0;
- (BOOL)_removeFileWithError:(id *)a0;
- (void)signalSiriAvailability;

@end
