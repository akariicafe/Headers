@interface SKDiskImageResizeParams : NSObject

@property (nonatomic) unsigned long long size;
@property (nonatomic) BOOL stdinPassPhrase;
@property (nonatomic) BOOL shallow;

- (id)initWithSize:(unsigned long long)a0;

@end
