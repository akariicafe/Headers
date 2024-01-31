@class NSString, NSDictionary, NSData, NSNumber, NSMutableArray;

@interface UARPPayloadPersonalizationInfo : NSObject

@property unsigned long long unitNumber;
@property (retain) NSString *keyManifest;
@property (retain) NSNumber *boardID;
@property (retain) NSNumber *chipID;
@property (retain) NSNumber *ecID;
@property (retain) NSData *nonce;
@property (retain) NSNumber *productionMode;
@property (retain) NSNumber *securityDomain;
@property (retain) NSNumber *securityMode;
@property (retain) NSDictionary *tssOptions;
@property (retain) NSData *manifest;
@property (retain) NSData *personalizedData;
@property (retain) NSMutableArray *trimmedTlvs;
@property (retain) NSData *personalizedMetaData;

- (void).cxx_destruct;

@end
