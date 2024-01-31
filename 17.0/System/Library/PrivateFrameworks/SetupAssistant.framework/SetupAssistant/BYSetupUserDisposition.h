@class NSString, NSNumber, NSDate;

@interface BYSetupUserDisposition : NSObject

@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic, getter=isNewUser) NSNumber *newUser;
@property (retain, nonatomic, getter=isChild) NSNumber *child;

+ (id)current;

- (id)_dictionaryRepresentation;
- (id)init;
- (id)initWithPreferences:(id)a0;
- (void).cxx_destruct;
- (void)_loadDataFromPreferences:(id)a0;
- (id)initWithChild:(BOOL)a0;
- (id)initWithNewUser:(BOOL)a0 child:(BOOL)a1;
- (id)initWithProductVersion:(id)a0 date:(id)a1;
- (id)initWithProductVersion:(id)a0 date:(id)a1 newUser:(BOOL)a2 child:(BOOL)a3;
- (void)persistUsingPreferences:(id)a0;

@end
