@interface NTKColorCircularFaceViewComplicationFactory : NTKFaceViewComplicationFactory

- (double)_colorCircularEdgeGapForState:(long long)a0;
- (double)_colorCircularKeylinePaddingForState:(long long)a0;
- (double)_colorCircularLisaGapForState:(long long)a0;
- (void)configureComplicationView:(id)a0 forSlot:(id)a1 faceView:(id)a2;
- (id)initForDevice:(id)a0;
- (long long)keylineStyleForComplicationSlot:(id)a0;
- (void)loadLayoutRulesForFaceView:(id)a0;
- (id)newLegacyViewForComplication:(id)a0 family:(long long)a1 slot:(id)a2 faceView:(id)a3;

@end
