@class HKQuantityType;

@interface _HDFakeDataGenerator : NSObject {
    double _lastGenerationTime;
    HKQuantityType *_type;
    double _interval;
    double _nextGenerationTime;
    id /* block */ _valueGenerator;
}

- (void).cxx_destruct;

@end
