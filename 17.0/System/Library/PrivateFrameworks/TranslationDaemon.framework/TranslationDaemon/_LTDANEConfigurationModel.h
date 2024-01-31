@class NSDictionary, NSString;

@interface _LTDANEConfigurationModel : NSObject

@property (retain, nonatomic) NSDictionary *root;
@property (retain, nonatomic) NSDictionary *capabilities;
@property (readonly, nonatomic) NSString *config;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (long long)capabilityForSubType:(id)a0;
- (id)subTypes;

@end
