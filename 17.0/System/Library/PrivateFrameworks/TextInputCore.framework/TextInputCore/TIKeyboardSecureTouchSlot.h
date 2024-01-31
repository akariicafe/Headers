@protocol BSInvalidatable;

@interface TIKeyboardSecureTouchSlot : NSObject

@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long authenticationMessageContext;
@property (retain, nonatomic) id<BSInvalidatable> invalidatable;

- (void)dealloc;
- (void).cxx_destruct;

@end
