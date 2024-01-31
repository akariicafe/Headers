@class NSObject, NSMutableArray, NSMutableDictionary;
@protocol OS_nw_path_evaluator;

@interface PSGAutomaticContentDownloadController : PSListController {
    id _settingsChangedObserver;
}

@property (retain, nonatomic) NSMutableArray *applications;
@property (retain, nonatomic) NSMutableDictionary *applicationStates;
@property (retain, nonatomic) NSObject<OS_nw_path_evaluator> *defaultPathEvaluator;
@property (nonatomic) BOOL inLowDataMode;

- (id)init;
- (void)dealloc;
- (id)whitelist;
- (id)specifiers;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)applicationEnabled:(id)a0;
- (id)backgroundRefreshState:(id)a0;
- (void)setApplicationEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setBackgroundRefreshState:(id)a0 withSpecifier:(id)a1;

@end
