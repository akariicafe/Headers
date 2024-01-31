@interface RemoteUI.RUISwiftUITableViewRow : RUITableViewRow {
    void /* unknown type, empty encoding */ cell;
    void /* unknown type, empty encoding */ loadedXML;
    void /* unknown type, empty encoding */ remoteState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_remoteLoader;
    void /* unknown type, empty encoding */ subscription;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ xmlElement;
@property (nonatomic) BOOL selected;

- (id)init;
- (BOOL)isSelected;
- (id)tableCell;
- (void).cxx_destruct;
- (void)populatePostbackDictionary:(id)a0;
- (id)initWithAttributes:(id)a0 parent:(id)a1;
- (void)didBecomeDeselected;
- (void)didBecomeSelected;

@end
