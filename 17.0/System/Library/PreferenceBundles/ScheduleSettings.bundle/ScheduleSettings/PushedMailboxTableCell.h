@class UILabel, UIImageView;

@interface PushedMailboxTableCell : UITableViewCell {
    UILabel *_mailboxName;
    UIImageView *_mailboxIcon;
}

@property (nonatomic) unsigned int level;

+ (int)_cacheIndexForType:(int)a0;
+ (id)_iconForType:(int)a0 nested:(BOOL)a1;

- (void)setType:(int)a0;
- (void)dealloc;
- (void)prepareForReuse;
- (void)setEnabled:(BOOL)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (BOOL)isChecked;
- (void)setChecked:(BOOL)a0;
- (void)setMailboxName:(id)a0;
- (void)_setupMailFolderIconForImage:(id)a0;

@end
