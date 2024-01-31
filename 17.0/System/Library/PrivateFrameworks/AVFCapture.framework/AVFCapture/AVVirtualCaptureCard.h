@interface AVVirtualCaptureCard : NSObject {
    struct OpaqueFigVirtualCaptureCard { } *_virtualCaptureCard;
}

@property (class, readonly, getter=isVirtualCaptureCardSupported) BOOL virtualCaptureCardSupported;

@property (readonly, nonatomic) long long capacity;
@property (readonly, nonatomic) long long freeSpace;

+ (void)initialize;
+ (id)sharedVirtualCaptureCard;

- (id)init;
- (void)dealloc;
- (BOOL)setCapacity:(long long)a0 error:(id *)a1;
- (void)showSystemUserInterface;

@end
