@class NSArray, NUIContainerGridView, NSString, NSMutableArray;
@protocol TLKSelectableGridViewDelegate;

@interface TLKSelectableGridView : TLKView <NUIContainerViewDelegate>

@property (retain, nonatomic) NUIContainerGridView *contentView;
@property (retain, nonatomic) NSMutableArray *buttons;
@property (retain, nonatomic) NSArray *tuples;
@property (nonatomic) long long selectedIndex;
@property (weak) id<TLKSelectableGridViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)maxColumns;
+ (unsigned long long)idealNumberOfColumnsForTitles:(id)a0 fittingSize:(struct CGSize { double x0; double x1; })a1 containerView:(id)a2;

- (void).cxx_destruct;
- (id)_createButton;
- (void)containerView:(id)a0 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x0; double x1; })a1 forReason:(long long)a2;
- (struct CGSize { double x0; double x1; })containerView:(id)a0 systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a1 forArrangedSubview:(id)a2;
- (id)arrangedEntrySubviews;
- (void)observedPropertiesChanged;
- (void)selectableGridButtonPressed:(id)a0;
- (id)setupContentView;

@end
