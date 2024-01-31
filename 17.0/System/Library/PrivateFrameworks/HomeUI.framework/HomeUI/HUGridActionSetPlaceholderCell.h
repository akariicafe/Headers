@class HUIconView;

@interface HUGridActionSetPlaceholderCell : HUGridActionSetCell {
    HUIconView *_iconView;
}

- (void)updateConstraints;
- (void).cxx_destruct;
- (id)iconView;
- (void)setIconView:(id)a0;
- (void)_setupActionSetCell;
- (unsigned long long)iconDisplayStyle;

@end
