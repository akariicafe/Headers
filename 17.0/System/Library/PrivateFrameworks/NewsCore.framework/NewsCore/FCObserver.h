@class NSString;

@interface FCObserver : NSObject <FCDisposable>

@property (nonatomic) unsigned long long token;
@property (weak, nonatomic) id keepAliveObject;
@property (copy, nonatomic) id /* block */ observerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithToken:(unsigned long long)a0;
- (id)init;
- (void)dispose;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)disposeOn:(id)a0;

@end
