@class NSData, INIntent;
@protocol ATXLazyIntentDelegateProtocol;

@interface ATXLazyIntent : NSObject {
    INIntent *_intent;
    NSData *_intentData;
}

@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSData *intentData;
@property (weak, nonatomic) id<ATXLazyIntentDelegateProtocol> delegate;

- (void)handleMemoryPressure;
- (id)init;
- (BOOL)isDeserialized;
- (id)initWithIntent:(id)a0 intentData:(id)a1;
- (id)_deserializeIntent;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;
- (id)initWithIntentData:(id)a0;

@end
