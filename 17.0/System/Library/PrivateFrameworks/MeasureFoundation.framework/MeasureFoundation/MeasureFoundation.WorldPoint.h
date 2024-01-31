@class NSArray;

@interface MeasureFoundation.WorldPoint : MeasureFoundation.MeasureObject {
    void /* unknown type, empty encoding */ lines;
    void /* unknown type, empty encoding */ parentLine;
    void /* unknown type, empty encoding */ snapLine;
    void /* unknown type, empty encoding */ partOfRectangleId;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _anchor;
    void /* unknown type, empty encoding */ triangulationAnchor;
    void /* unknown type, empty encoding */ _type;
}

@property (nonatomic, copy) NSArray *lines;
@property (nonatomic) long long type;
@property (nonatomic) long long state;

- (id)init;
- (void).cxx_destruct;

@end
