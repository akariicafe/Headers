@class NSString, NSData;

@interface EKImage : EKObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSData *colorData;
@property (readonly, nonatomic) long long type;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)imageWithEventStore:(id)a0 systemSymbolName:(id)a1 colorData:(id)a2;

- (void)setType:(long long)a0;
- (void)setIdentifier:(id)a0;
- (void)setColorData:(id)a0;
- (void)setName:(id)a0;
- (id)identifier;
- (void)setSource:(id)a0;
- (id)source;
- (void)saveInCalendar:(id)a0;
- (id)_generateIdentifierInCalendar:(id)a0;

@end
