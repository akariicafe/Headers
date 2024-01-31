@class UICellConfigurationState;

@interface HealthRecordsUI.MedicalRecordTimelineAccountUpgradeTileItemCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ hasRegisteredForNotifications;
    void /* unknown type, empty encoding */ tileView;
}

@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;

- (void)dismissAction;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;
- (void)reloadDataSource;
- (void)upgradeAction;

@end
