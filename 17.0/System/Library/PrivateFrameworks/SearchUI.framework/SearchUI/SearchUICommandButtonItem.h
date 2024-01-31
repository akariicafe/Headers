@class UIColor, SFButtonItem;

@interface SearchUICommandButtonItem : SFCommandButtonItem

@property (retain, nonatomic) SFButtonItem *sfButtonItem;
@property (retain, nonatomic) UIColor *tintColor;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSFButtonItem:(id)a0;

@end
