@class NSString;

@interface LKLogKeychainItemAdditionEvent : LKLogEvent

@property (readonly, nonatomic) NSString *keychainItemAdded;

+ (id)eventFromLKLogEvent:(id)a0;

- (id)dictionary;
- (void).cxx_destruct;
- (void)setKeychainItemAdded:(id)a0;

@end
