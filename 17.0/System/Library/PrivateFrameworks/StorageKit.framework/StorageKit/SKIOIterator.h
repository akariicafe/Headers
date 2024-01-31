@interface SKIOIterator : SKIOObject

@property (nonatomic) unsigned long long attempt;
@property (readonly, nonatomic) BOOL invalidated;

- (unsigned int)copyNextObject;
- (id)initWithClassName:(id)a0;

@end
