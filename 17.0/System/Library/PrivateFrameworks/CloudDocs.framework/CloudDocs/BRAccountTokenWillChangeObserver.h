@class NSString;

@interface BRAccountTokenWillChangeObserver : NSObject

@property (readonly, nonatomic) NSString *personaID;

- (void).cxx_destruct;
- (void)_accountWillChange;
- (id)initWithPersonaID:(id)a0;

@end
