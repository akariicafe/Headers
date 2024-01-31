@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {
    NSArray *_values;
    long long _valuesCount;
    long long _currentIndex;
}

@property (nonatomic) double trackedValue;
@property (nonatomic) BOOL isAccumulating;

- (id)init;
- (void)addValue:(double)a0;
- (void).cxx_destruct;
- (double)speed;

@end
