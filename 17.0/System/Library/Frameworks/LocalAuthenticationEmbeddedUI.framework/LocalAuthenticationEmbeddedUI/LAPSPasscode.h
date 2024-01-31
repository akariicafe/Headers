@class NSData, NSString, LAPSPasscodeType;

@interface LAPSPasscode : NSObject

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSString *passcode;
@property (readonly, nonatomic) LAPSPasscodeType *type;

+ (id)emptyPasscode;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPasscode:(id)a0;
- (id)initWithLocalizedPasscode:(id)a0 type:(id)a1;
- (id)externalizePasscode;
- (id)initWithPasscode:(id)a0 type:(id)a1;

@end
