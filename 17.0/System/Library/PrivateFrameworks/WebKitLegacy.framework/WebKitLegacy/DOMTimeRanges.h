@interface DOMTimeRanges : DOMObject

@property (readonly) unsigned int length;

- (void)dealloc;
- (double)start:(unsigned int)a0;
- (double)end:(unsigned int)a0;

@end
