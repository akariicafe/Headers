@class NSMutableArray;

@interface AXServerInstanceActionHandlerHelper : NSObject {
    NSMutableArray *_actionHandlers;
}

@property (readonly, nonatomic) int registrationMessageKey;
@property (readonly, nonatomic) int actionResultMessageKey;

- (void).cxx_destruct;
- (BOOL)_hasActionHandlerForClientPort:(unsigned int)a0;
- (void)_removeActionHandler:(unsigned int)a0;
- (id)handleActionHandlerRegistrationMessage:(id)a0;
- (id)initWithRegistrationMessageKey:(int)a0 actionResultMessageKey:(int)a1;
- (void)notifyActionOccurredWithType:(long long)a0 payload:(id)a1;

@end
