@class UIImageView, _UICollectionViewOutlineCellDisclosureConfiguration, UILabel, UIView;

@interface _UICollectionViewOutlineCell : _UICollectionViewListCell

@property (retain, nonatomic) id identifier;
@property (retain, nonatomic) UIView *outlineContentView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL automaticallyTogglesExpansionState;
@property (copy, nonatomic) _UICollectionViewOutlineCellDisclosureConfiguration *disclosureConfiguration;
@property (copy, nonatomic) id /* block */ disclosureWasTappedHandler;
@property (nonatomic) double highlightCornerRadius;
@property (nonatomic) BOOL selectionFollowsTintColor;

- (void).cxx_destruct;

@end
