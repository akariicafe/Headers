@class NSData, NSURL;

@interface DESMMappedFile : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void *)_mmap:(void *)a0 len:(unsigned long long)a1 protectionFlags:(int)a2 sharenFlags:(int)a3 filedHandle:(int)a4 offset:(long long)a5;
- (int)_munmap:(void *)a0 len:(unsigned long long)a1;

@end
