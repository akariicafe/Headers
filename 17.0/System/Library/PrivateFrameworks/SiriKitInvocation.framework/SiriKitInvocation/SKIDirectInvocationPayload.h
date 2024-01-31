@class NSString, NSDictionary;

@interface SKIDirectInvocationPayload : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *userData;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
