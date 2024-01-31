@class SBDodgingItem, NSString, UIView, NSArray, SBDodgingResolverViewController, UITableView, NSMutableSet, UIPanGestureRecognizer, UILabel, UIColor;

@interface SBDodgingTesterView : UIView <SBDodgingItemDelegate, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) SBDodgingItem *item;
@property (weak, nonatomic) SBDodgingResolverViewController *controller;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (nonatomic) struct CGPoint { double x; double y; } preferredCenter;
@property (retain, nonatomic) NSMutableSet *ignoringItems;
@property (nonatomic) unsigned long long corner;
@property (nonatomic) BOOL stashed;
@property (retain, nonatomic) UIPanGestureRecognizer *moveGesture;
@property (nonatomic) struct CGPoint { double x; double y; } initialMoveCenter;
@property (retain, nonatomic) UIPanGestureRecognizer *resizeGesture;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *resolvedValuesLabel;
@property (retain, nonatomic) UIView *resizeView;
@property (retain, nonatomic) NSArray *otherIdentifiers;
@property (retain, nonatomic) UITableView *otherItemsTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_handleChangeAnchorGesture:(id)a0;
- (void)_handleDeleteGesture:(id)a0;
- (void)_handleMoveGesture:(id)a0;
- (void)_handleResizeGesture:(id)a0;
- (void)_updateResolvedValuesLabel;
- (void)dodgingResolver:(id)a0 dodgingItemDidChange:(id)a1;
- (void)dodgingResolver:(id)a0 dodgingItemDidSettle:(id)a1;
- (id)dodgingResolver:(id)a0 preferenceForDodgingItem:(id)a1;
- (id)initWithName:(id)a0 color:(id)a1 controller:(id)a2;

@end
