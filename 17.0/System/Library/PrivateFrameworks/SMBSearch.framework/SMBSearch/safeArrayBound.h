@interface safeArrayBound : NSObject

@property unsigned int cElements;
@property unsigned int lowBound;

- (id)initWithElements:(unsigned int)a0 LowBound:(unsigned int)a1;

@end
