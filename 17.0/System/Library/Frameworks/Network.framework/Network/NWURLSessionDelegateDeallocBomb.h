@class NSObject;

@interface NWURLSessionDelegateDeallocBomb : NSObject {
    BOOL __disarmed;
    NSObject *__object;
    SEL __method;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
