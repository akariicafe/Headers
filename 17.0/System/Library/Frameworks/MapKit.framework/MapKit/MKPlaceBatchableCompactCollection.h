@class MKPlaceCompactCollectionViewModel, MKMapItemIdentifier;

@interface MKPlaceBatchableCompactCollection : NSObject

@property (readonly, nonatomic) MKMapItemIdentifier *guideLocationIdentifier;
@property (retain, nonatomic) MKPlaceCompactCollectionViewModel *viewModel;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithWorldwideViewModel:(id)a0;

@end
