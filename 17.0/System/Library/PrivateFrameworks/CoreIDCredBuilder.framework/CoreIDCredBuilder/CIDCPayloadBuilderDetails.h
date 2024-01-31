@class NSString, NSDictionary, NSData, NSDate;

@interface CIDCPayloadBuilderDetails : NSObject

@property (nonatomic) unsigned long long format;
@property (retain, nonatomic) NSString *docType;
@property (retain, nonatomic) NSDictionary *elements;
@property (retain, nonatomic) NSDate *validFrom;
@property (retain, nonatomic) NSDate *validUntil;
@property (retain, nonatomic) NSData *deviceKey;
@property (nonatomic) long long signingAlgorithm;

- (void).cxx_destruct;
- (id)initWithFormat:(unsigned long long)a0 docType:(id)a1 elements:(id)a2 validFrom:(id)a3 validUntil:(id)a4 deviceKey:(id)a5 signingAlgorithm:(long long)a6;
- (id)initWithFormat:(unsigned long long)a0 docType:(id)a1 elements:(id)a2 validFrom:(id)a3 validUntil:(id)a4 deviceKey:(id)a5;

@end
