@interface _OSLogDirectoryReference : NSObject {
    int _fd;
    long long _etk;
}

@property (readonly, nonatomic) int fileDescriptor;

- (void)close;
- (id)initWithDescriptor:(int)a0;
- (void)dealloc;
- (id)initWithDescriptor:(int)a0 sandboxExtensionToken:(const char *)a1;

@end
