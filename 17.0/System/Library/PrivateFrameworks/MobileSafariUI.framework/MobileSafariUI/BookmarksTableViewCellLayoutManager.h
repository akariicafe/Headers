@class NSString;

@interface BookmarksTableViewCellLayoutManager : UITableViewCellLayoutManager

@property (retain, nonatomic) NSString *currentContentSizeCategory;

+ (id)sharedManager;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)a0 rowWidth:(double)a1 forSizing:(BOOL)a2;
- (void)layoutSubviewsOfCell:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryEndingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryStartingRectForCell:(id)a0 forNewEditingState:(BOOL)a1 showingDeleteConfirmation:(BOOL)a2;
- (long long)_numberOfLinesForCurrentContentSize;

@end
