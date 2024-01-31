@class NSString;

@interface FCSIWAPurchaseConfig : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;

- (id)initWithConfigDictionary:(id)a0;
- (id)initWithClientIdentifier:(id)a0 teamIdentifier:(id)a1;
- (void).cxx_destruct;

@end
