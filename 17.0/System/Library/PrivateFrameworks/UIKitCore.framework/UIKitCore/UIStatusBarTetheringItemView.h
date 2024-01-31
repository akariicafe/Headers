@interface UIStatusBarTetheringItemView : UIStatusBarItemView {
    int _tetheringConnectionCount;
}

- (id)contentsImage;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
