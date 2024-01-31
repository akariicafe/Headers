@class NSMutableArray;

@interface TLKContentsContainerView : TLKStackView

@property (retain, nonatomic) NSMutableArray *contentsViews;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithContents:(id)a0;

@end
