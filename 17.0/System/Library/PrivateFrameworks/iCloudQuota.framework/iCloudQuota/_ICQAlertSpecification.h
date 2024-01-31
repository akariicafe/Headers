@class NSDictionary, NSMutableDictionary, NSString;

@interface _ICQAlertSpecification : NSObject {
    NSDictionary *_serverDict;
}

@property (retain) NSMutableDictionary *linkForButtonIndex;
@property (retain, nonatomic) NSDictionary *serverDict;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSString *altMessage;
@property (retain, nonatomic) NSString *lockScreenTitle;
@property (retain, nonatomic) NSString *lockScreenMessage;
@property (retain, nonatomic) NSString *altLockScreenMessage;
@property (nonatomic) BOOL disableLockScreenAlert;
@property (nonatomic) long long defaultButtonIndex;

+ (id)alertSpecificationDictionarySampleForLevel:(long long)a0;
+ (id)alertSpecificationSampleForLevel:(long long)a0;

- (id)init;
- (id)initWithServerDictionary:(id)a0;
- (void).cxx_destruct;
- (void)_setLinks:(id)a0 defaultIndex:(unsigned long long)a1;
- (id)linkForButtonIndex:(long long)a0;
- (void)setLink:(id)a0 forButtonIndex:(long long)a1;
- (void)setLink:(id)a0 forButtonIndex:(long long)a1 defaultButton:(BOOL)a2;

@end
