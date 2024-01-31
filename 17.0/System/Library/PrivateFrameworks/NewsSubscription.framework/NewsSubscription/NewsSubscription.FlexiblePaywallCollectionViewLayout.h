@interface NewsSubscription.FlexiblePaywallCollectionViewLayout : UICollectionViewLayout {
    void /* unknown type, empty encoding */ layoutProvider;
    void /* unknown type, empty encoding */ itemAttributes;
    void /* unknown type, empty encoding */ supplementaryItemAttributes;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
