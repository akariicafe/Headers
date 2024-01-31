@class NSSet;

@interface CreateMLComponents.DataFrameRowFeatureProvider : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ featureColumns;
    void /* unknown type, empty encoding */ indexByName;
    void /* unknown type, empty encoding */ rowIndex;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
