@interface SGQuickResponsesClassScore : NSObject

@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) unsigned long long index;

- (long long)compare:(id)a0;
- (id)initWithValue:(double)a0 index:(unsigned long long)a1;

@end
