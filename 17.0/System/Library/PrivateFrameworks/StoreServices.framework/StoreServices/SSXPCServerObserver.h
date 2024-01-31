@interface SSXPCServerObserver : NSObject

@property (nonatomic) id observer;
@property (nonatomic) SEL selector;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
