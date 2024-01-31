@class NSString;

@interface STKCallSetupSessionData : STKTextSessionData

@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) BOOL isHighPriority;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0 simLabel:(id)a1 phoneNumber:(id)a2;

@end
