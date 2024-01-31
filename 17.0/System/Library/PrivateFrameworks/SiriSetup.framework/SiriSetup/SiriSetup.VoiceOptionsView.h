@interface SiriSetup.VoiceOptionsView : NSObject <UITableViewDelegate, SUICVoiceSelectionDisplaying> {
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ sectionReuseIdentifier;
    void /* unknown type, empty encoding */ cellReuseIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableViewDataSource;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ voiceSelectionViewModelProvider;
@property (nonatomic, retain) void /* unknown type, empty encoding */ voiceSelectionEventHandler;

- (id)init;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)voiceSelectionViewModelDidChange;

@end
