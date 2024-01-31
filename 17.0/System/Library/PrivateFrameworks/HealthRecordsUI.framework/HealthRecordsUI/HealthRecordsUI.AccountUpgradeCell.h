@class UICellConfigurationState;

@interface HealthRecordsUI.AccountUpgradeCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ item;
    void /* unknown type, empty encoding */ disableAction;
    void /* unknown type, empty encoding */ hideDismiss;
    void /* unknown type, empty encoding */ hasSetUpViews;
}

@property (nonatomic, readonly) UICellConfigurationState *_bridgedConfigurationState;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;

@end
