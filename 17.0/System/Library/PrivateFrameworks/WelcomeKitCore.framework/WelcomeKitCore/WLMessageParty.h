@class NSString;

@interface WLMessageParty : NSObject

@property (readonly, nonatomic) BOOL isPhoneNumber;
@property (readonly, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *icc;
@property (readonly, nonatomic) NSString *np;
@property (readonly, nonatomic) NSString *ccAcNumber;

+ (id)_guessIccForNumber:(id)a0;
+ (id)_normalize:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_initWithAddress:(id)a0 addCountryCode:(BOOL)a1 sqlController:(id)a2;

@end
