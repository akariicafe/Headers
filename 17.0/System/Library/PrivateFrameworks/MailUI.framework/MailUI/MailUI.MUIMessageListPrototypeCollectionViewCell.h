@class NSString, MessageListCellHelper;
@protocol EMMessageListItem;

@interface MailUI.MUIMessageListPrototypeCollectionViewCell : UICollectionViewCell <MessageListSectionCellCapable> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cellHelper;
}

@property (class, nonatomic, copy) NSString *reusableIdentifier;

@property (nonatomic) void /* unknown type, empty encoding */ backgroundViewConfigurationGrouping;
@property (nonatomic) void /* unknown type, empty encoding */ needsFlushSeparator;
@property (nonatomic, weak) void /* unknown type, empty encoding */ disclosureDelegate;
@property (nonatomic, retain) MessageListCellHelper *cellHelper;
@property (nonatomic, readonly) id<EMMessageListItem> messageListItem;
@property (nonatomic, retain) void /* unknown type, empty encoding */ messageListItemFuture;
@property (nonatomic, retain) void /* unknown type, empty encoding */ messageListItemFetchTimeoutCancelable;
@property (nonatomic, retain) void /* unknown type, empty encoding */ itemID;

- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setDisclosureEnabled:(BOOL)a0 animated:(BOOL)a1;

@end
