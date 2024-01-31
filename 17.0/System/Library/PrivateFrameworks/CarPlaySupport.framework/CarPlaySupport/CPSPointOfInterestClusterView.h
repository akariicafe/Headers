@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView

- (void)_configure;
- (void)setAnnotation:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)update;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;

@end
