@class NFVASRequest, NSData, NSNumber;

@interface NFVASResponse : NSObject

@property (retain, nonatomic) NFVASRequest *request;
@property (retain, nonatomic) NSData *token;
@property (retain, nonatomic) NSData *vasData;
@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSNumber *mobileCapabilities;
@property (readonly, nonatomic) BOOL paymentSupported;

+ (BOOL)validateDictionary:(id)a0;

- (id)asDictionary;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
