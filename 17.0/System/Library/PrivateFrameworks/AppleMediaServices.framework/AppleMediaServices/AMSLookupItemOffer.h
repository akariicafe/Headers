@class NSString, NSDictionary, NSNumber;

@interface AMSLookupItemOffer : NSObject

@property (readonly, nonatomic) NSString *buyParameters;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) NSString *offerType;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) NSString *subscriptionType;

- (id)initWithLookupDictionary:(id)a0;
- (id)actionTextForType:(id)a0;
- (void).cxx_destruct;

@end
