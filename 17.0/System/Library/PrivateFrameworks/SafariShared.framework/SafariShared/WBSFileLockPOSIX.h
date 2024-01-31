@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int _fileDescriptor;
}

- (void)dealloc;
- (id)initWithFileDescriptor:(int)a0;
- (void)releaseLock;

@end
