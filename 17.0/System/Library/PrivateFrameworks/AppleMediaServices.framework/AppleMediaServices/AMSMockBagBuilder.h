@class NSString, NSMutableDictionary, NSDate;

@interface AMSMockBagBuilder : NSObject

@property (retain, nonatomic) NSMutableDictionary *data;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSString *profileVersion;

- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (void)unionBagKeySet:(id)a0;
- (void)addBagKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;
- (id)createMockBag;

@end
