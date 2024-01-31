@class NSString;

@interface XPCStreamEventRegistration : NSObject

@property (readonly, nonatomic) NSString *streamName;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) Class dagServiceClass;

+ (id)registrationWithStream:(id)a0 eventName:(id)a1 dagServiceClass:(Class)a2;

- (void).cxx_destruct;
- (id)_initWithStream:(id)a0 eventName:(id)a1 dagServiceClass:(Class)a2;
- (void)invoke:(id)a0 fromStream:(id)a1 withAssets:(id)a2 withSelfMetadata:(id)a3;

@end
