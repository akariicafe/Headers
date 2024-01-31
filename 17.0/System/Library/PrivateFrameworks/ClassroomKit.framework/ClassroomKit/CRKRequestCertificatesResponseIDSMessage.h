@class NSUUID, NSArray, NSDictionary, NSError;

@interface CRKRequestCertificatesResponseIDSMessage : NSObject <CRKIDSMessage>

@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (readonly, nonatomic) NSArray *certificateDataCollection;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;

+ (id)instanceWithDictionary:(id)a0;

- (void).cxx_destruct;
- (id)initWithRequestIdentifier:(id)a0 certificateDataCollection:(id)a1 error:(id)a2;

@end
