@class NSSet;

@interface UIUnderstanding.TwinEmbeddingTransformerSquareInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ screen_pos;
    void /* unknown type, empty encoding */ screen_label;
    void /* unknown type, empty encoding */ screen_rcnn;
    void /* unknown type, empty encoding */ padding_mask;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
