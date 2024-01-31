@class UIColor;
@protocol UITableConstants;

@interface _UICollectionViewListDetailAccessoryButton : UIButton <_UICollectionViewListDetailAccessoryView>

@property (nonatomic) long long type;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (retain, nonatomic) UIColor *accessoryBackgroundColor;
@property (copy, nonatomic) id /* block */ actionHandler;

- (id)init;
- (void)_executeActionHandler;
- (void).cxx_destruct;
- (id)_renderedImage;

@end
