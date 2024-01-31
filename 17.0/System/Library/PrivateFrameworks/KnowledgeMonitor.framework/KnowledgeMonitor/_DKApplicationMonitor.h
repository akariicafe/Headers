@class FBSDisplayLayoutMonitor, NSMutableDictionary, BMSource, NSString, BMStream, RBSProcessMonitor;

@interface _DKApplicationMonitor : _DKApplicationMonitorBase {
    FBSDisplayLayoutMonitor *_layoutMonitor;
    RBSProcessMonitor *_processMonitor;
    BMSource *_appInFocusSource;
    NSString *_lastFocalApplication;
    NSMutableDictionary *_activeExtensions;
}

@property (retain, nonatomic) BMStream *displayElementStream;
@property (retain, nonatomic) BMSource *displayElementSource;
@property (retain, nonatomic) NSMutableDictionary *currentFrontBoardElements;

+ (id)entitlements;

- (id /* block */)processUpdateHandler;
- (void)_updateCurrentElementsWithDisplayElement:(id)a0;
- (id)init;
- (id)_newElementFromExistingDisplayElement:(id)a0 newTimestamp:(id)a1 newChangeType:(int)a2;
- (id)_elementFromDisplayLayoutElement:(id)a0 displayLayout:(id)a1 context:(id)a2 changeType:(int)a3;
- (void)platformSpecificStop;
- (void)layoutMonitor:(id)a0 didUpdateDisplayLayout:(id)a1 withContext:(id)a2;
- (void)obtainCurrentValue;
- (void)processMonitor:(id)a0 didUpdateState:(id)a1 forProcess:(id)a2;
- (void)platformSpecificStart;
- (id /* block */)displayLayoutTransitionHandler;
- (void).cxx_destruct;
- (void)donateElementsFromDisplayLayout:(id)a0 withContext:(id)a1;
- (id)focalApplicationFromDisplayLayout:(id)a0;
- (BOOL)ignoreAppExtension:(id)a0;

@end
