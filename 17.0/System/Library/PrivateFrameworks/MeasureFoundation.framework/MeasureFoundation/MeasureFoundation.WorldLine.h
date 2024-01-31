@class NSArray;

@interface MeasureFoundation.WorldLine : MeasureFoundation.MeasureObject {
    void /* unknown type, empty encoding */ lineType;
    void /* unknown type, empty encoding */ ends;
    void /* unknown type, empty encoding */ center;
    void /* unknown type, empty encoding */ snappedPoints;
    void /* unknown type, empty encoding */ isOnVerticalGuide;
    void /* unknown type, empty encoding */ identifiersOfObjectsComposedInto;
    void /* unknown type, empty encoding */ isALineMeasurement;
    void /* unknown type, empty encoding */ meanFPSDuringPlacement;
}

@property (nonatomic, copy) NSArray *identifiersOfObjectsComposedInto;

- (id)init;
- (void).cxx_destruct;

@end
