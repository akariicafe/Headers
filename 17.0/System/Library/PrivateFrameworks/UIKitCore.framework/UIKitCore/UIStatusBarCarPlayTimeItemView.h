@class NSString;

@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView {
    NSString *_timeString;
}

- (long long)textStyle;
- (id)contentsImage;
- (void).cxx_destruct;
- (id)_timeImageSet;
- (id)_timeImageSetForColor:(id)a0;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (double)neededSizeForImageSet:(id)a0;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
