@class NSString, UIButton, MessageListCellLayoutValues;

@interface MailUI.MUIMessageListPrototypeCellView : UIView <MessageListCellViewable> {
    void /* unknown type, empty encoding */ summary;
    void /* unknown type, empty encoding */ $__lazy_storage_$_disclosureButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subjectLabel;
}

@property (nonatomic) void /* unknown type, empty encoding */ chevronType;
@property (nonatomic) void /* unknown type, empty encoding */ editing;
@property (nonatomic) void /* unknown type, empty encoding */ compact;
@property (nonatomic) void /* unknown type, empty encoding */ shouldAnnotateReplyOrForward;
@property (nonatomic) void /* unknown type, empty encoding */ annotatedRelationshipType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ layoutValuesHelper;
@property (nonatomic, readonly) MessageListCellLayoutValues *layoutValues;
@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic, retain) UIButton *disclosureButton;
@property (nonatomic, retain) void /* unknown type, empty encoding */ configurationState;
@property (nonatomic, retain) void /* unknown type, empty encoding */ contentConfiguration;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundConfiguration;
@property (nonatomic, retain) void /* unknown type, empty encoding */ contactStore;

- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEditing;
- (BOOL)isCompact;
- (void)refreshForSignificantTimeChange;
- (void)applyIndicatorPreviewChangeAction:(id)a0;
- (void)setDisclosureEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setDisplayUnreadDot:(BOOL)a0;
- (void)setDisplayVIP:(BOOL)a0;

@end
