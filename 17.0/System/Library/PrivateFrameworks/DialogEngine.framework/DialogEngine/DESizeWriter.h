@interface DESizeWriter : NSObject <DEWriter>

@property (nonatomic) unsigned long long size;

- (void)close;
- (id)init;
- (void)writeData:(id)a0;

@end
