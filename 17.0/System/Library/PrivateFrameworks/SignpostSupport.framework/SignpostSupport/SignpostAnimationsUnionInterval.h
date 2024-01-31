@class NSMutableArray;

@interface SignpostAnimationsUnionInterval : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } animationTimeRange;
@property (retain, nonatomic) NSMutableArray *animationIntervals;

- (void).cxx_destruct;
- (id)initWithAnimation:(id)a0;

@end
