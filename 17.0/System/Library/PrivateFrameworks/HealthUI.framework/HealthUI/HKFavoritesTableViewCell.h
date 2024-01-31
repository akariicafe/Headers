@class UIImageView;

@interface HKFavoritesTableViewCell : UITableViewCell {
    UIImageView *_star;
    UIImageView *_filledStar;
}

@property (nonatomic, getter=isFavorited) BOOL favorited;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
