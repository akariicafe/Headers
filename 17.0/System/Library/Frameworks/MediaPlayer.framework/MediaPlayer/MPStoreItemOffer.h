@class NSArray, NSString, NSDictionary, NSNumber;

@interface MPStoreItemOffer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSNumber *price;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary;

- (id)initWithLookupDictionary:(id)a0;
- (unsigned long long)hash;
- (id)actionTextForType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
