@class NSString, NSData;

@interface WFPEMEncoding : NSObject

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSData *data;

+ (id)decodePEM:(id)a0 error:(id *)a1;

- (id)initWithType:(id)a0 data:(id)a1;
- (void).cxx_destruct;
- (id)encodedPEM;

@end
