@class NSMethodSignature, NSMutableArray;

@interface NSInvocation : NSObject {
    void *_frame;
    void *_retdata;
    NSMethodSignature *_signature;
    NSMutableArray *_container;
    BOOL *_replacedByPointerBacking;
    unsigned int _magic;
    unsigned char _retainedArgs;
    unsigned char _stackAllocated;
}

@property (readonly, retain) NSMethodSignature *methodSignature;
@property (readonly) BOOL argumentsRetained;
@property id target;
@property SEL selector;

+ (id)invocationWithMethodSignature:(id)a0;
+ (id)_invocationWithMethodSignature:(id)a0 frame:(void *)a1;

- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (id)debugDescription;
- (BOOL)_hasBlockArgument;
- (id)init;
- (void)invoke;
- (void)dealloc;
- (void)invokeUsingIMP:(void /* function */ *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)getReturnValue:(void *)a0;
- (void)_addAttachedObject:(id)a0;
- (void)retainArguments;
- (void)setReturnValue:(void *)a0;
- (void)getArgument:(void *)a0 atIndex:(long long)a1;
- (void)invokeWithTarget:(id)a0;
- (void)setArgument:(void *)a0 atIndex:(long long)a1;

@end
