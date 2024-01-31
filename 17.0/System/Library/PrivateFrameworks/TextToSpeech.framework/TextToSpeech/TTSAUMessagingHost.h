@class NSDictionary, NSSet;
@protocol AUMessageChannel;

@interface TTSAUMessagingHost : NSObject <TTSAUMessaging>

@property (retain, nonatomic) id<AUMessageChannel> channel;
@property (retain, nonatomic) NSDictionary *methods;
@property (retain, nonatomic) NSSet *allowedClasses;

+ (id)_validSelectorsForProtocol;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithMessageChannel:(id)a0;
- (void)_loadProtocolMethods;

@end
