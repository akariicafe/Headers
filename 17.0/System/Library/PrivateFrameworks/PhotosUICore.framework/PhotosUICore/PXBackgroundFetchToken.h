@interface PXBackgroundFetchToken : NSObject {
    BOOL _finished;
}

- (id)init;
- (void)dealloc;
- (void)finish;

@end
