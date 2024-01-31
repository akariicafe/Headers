@class NSString;

@interface OCCancel : NSObject <TCCancelDelegate> {
    BOOL mIsCancelled;
    BOOL mIsQuit;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isCancelled;
- (void)cancel;
- (void)quit;
- (BOOL)isQuit;

@end
