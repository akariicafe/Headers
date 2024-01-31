@interface _NAUIAutoUpdatingFontObserver : NSObject {
    id _notificationObserver;
}

@property (readonly, weak, nonatomic) id target;

+ (BOOL)canObserveFontsForTarget:(id)a0;

- (void)dealloc;
- (void)updateDyamicFontForCurrentContentSize;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;

@end
