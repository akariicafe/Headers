@class NSArray, NSString, NSDate, CLLocation;

@interface _MKLocalSearchExternalTransitLookupParameters : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *stationCodes;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSDate *transactionDate;
@property (retain, nonatomic) CLLocation *transactionLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
