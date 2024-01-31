@class NSString;

@interface _PUScrollViewPageSwipeTestContext : NSObject

@property (copy, nonatomic) NSString *testName;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) long long numberOfIterations;
@property (nonatomic) unsigned long long scrollAxis;
@property (nonatomic) struct CGPoint { double x; double y; } originContentOffset;
@property (nonatomic) long long currentIteration;
@property (nonatomic) long long currentPage;
@property (nonatomic) long long currentDirection;
@property (nonatomic) double currentPageSwipeProgress;
@property (nonatomic) long long currentState;

- (id)init;
- (void).cxx_destruct;

@end
