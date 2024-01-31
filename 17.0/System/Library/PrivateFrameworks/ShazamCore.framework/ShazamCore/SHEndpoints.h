@class NSDictionary, NSString;

@interface SHEndpoints : NSObject

@property (readonly, nonatomic) NSDictionary *endpoints;
@property (readonly, copy, nonatomic) NSString *suggestedLanguage;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 suggestedLanguage:(id)a1;
- (id)lookupURLPathForClientIdentifier:(id)a0;
- (id)matchURLPathForClientIdentifier:(id)a0;

@end
