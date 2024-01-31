@class NSString;

@interface HAPPairSetupSessionServerInfo : NSObject

@property (retain, nonatomic) NSString *productData;
@property (nonatomic) int maxTries;

- (void).cxx_destruct;
- (id)initWithProductData:(id)a0 maxTries:(int)a1;

@end
