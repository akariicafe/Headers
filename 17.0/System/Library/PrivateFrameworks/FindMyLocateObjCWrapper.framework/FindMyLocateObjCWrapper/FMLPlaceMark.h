@class NSString, NSArray;

@interface FMLPlaceMark : NSObject

@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *stateCode;
@property (copy, nonatomic) NSString *streetAddress;
@property (copy, nonatomic) NSString *streetName;
@property (copy, nonatomic) NSArray *formattedAddressLines;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)comparisonIdentifier;
- (id)initWithLocality:(id)a0 administrativeArea:(id)a1 country:(id)a2 stateCode:(id)a3 streetAddress:(id)a4 streetName:(id)a5 formattedAddressLines:(id)a6;

@end
