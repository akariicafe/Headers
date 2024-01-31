@class NSObject;
@protocol OS_dispatch_group;

@interface VSWaitGroup : NSObject {
    NSObject<OS_dispatch_group> *_group;
}

- (BOOL)wait;
- (id)init;
- (void)leave;
- (void).cxx_destruct;
- (void)enter;
- (BOOL)waitWithMilliseconds:(unsigned long long)a0;

@end
