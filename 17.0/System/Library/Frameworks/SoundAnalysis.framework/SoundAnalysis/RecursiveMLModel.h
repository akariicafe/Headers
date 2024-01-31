@interface RecursiveMLModel : NSObject <SNMLModel> {
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ recursiveInputs;
    void /* unknown type, empty encoding */ outputToInputMap;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ modelDescription;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;

@end
