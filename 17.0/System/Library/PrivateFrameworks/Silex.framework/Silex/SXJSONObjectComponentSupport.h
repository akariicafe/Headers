@class NSString;

@interface SXJSONObjectComponentSupport : NSObject

@property (readonly, nonatomic) NSString *specVersion;

+ (id)shared;

- (id)initWithSpecVersion:(id)a0;
- (id /* block */)objectValueClassBlock;
- (void).cxx_destruct;
- (id /* block */)purgeClassBlock;

@end
