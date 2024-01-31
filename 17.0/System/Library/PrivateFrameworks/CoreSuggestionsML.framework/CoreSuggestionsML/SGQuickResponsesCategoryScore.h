@interface SGQuickResponsesCategoryScore : NSObject {
    unsigned long long _modelCount;
}

@property (readonly, nonatomic) double average;
@property (readonly, nonatomic) double maximum;

- (id)init;
- (void)addScore:(double)a0;

@end
