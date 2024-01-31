@class NSString, NSDictionary;

@interface CRKToolCommandUserInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

- (id)appVersion;
- (id)initWithSessionIdentifier:(id)a0;
- (void).cxx_destruct;

@end
