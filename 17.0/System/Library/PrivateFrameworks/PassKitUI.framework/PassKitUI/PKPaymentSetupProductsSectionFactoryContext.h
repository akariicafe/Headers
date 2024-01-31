@class NSString, CLLocation, NSCharacterSet;

@interface PKPaymentSetupProductsSectionFactoryContext : NSObject

@property (readonly, nonatomic) NSString *primaryRegion;
@property (readonly, nonatomic) NSString *primaryCountryName;
@property (readonly, nonatomic) NSString *secondaryRegion;
@property (readonly, nonatomic) NSString *secondaryCountryName;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSCharacterSet *tokenizerCharacterSet;

+ (id)contextWithPrimaryRegion:(id)a0 primaryCountryName:(id)a1 secondaryRegion:(id)a2 secondaryCountryName:(id)a3 location:(id)a4;
+ (id)contextWithPrimaryRegion:(id)a0 primaryCountryName:(id)a1 secondaryRegion:(id)a2 secondaryCountryName:(id)a3 location:(id)a4 tokenizerCharacterSet:(id)a5;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPrimaryRegion:(id)a0 primaryCountryName:(id)a1 secondaryRegion:(id)a2 secondaryCountryName:(id)a3 location:(id)a4 tokenizerCharacterSet:(id)a5;

@end
