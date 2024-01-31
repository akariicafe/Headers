@class NSString, NSData, NSDictionary;

@interface AMSCardMetadataRegistrationResult : NSObject

@property (retain, nonatomic) NSString *cardArtwork;
@property (retain, nonatomic) NSData *cardArtworkData;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) NSString *descriptionLong;
@property (retain, nonatomic) NSString *descriptionShort;
@property (nonatomic) long long paymentNetwork;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *suffix;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCardArtwork:(id)a0 cardType:(long long)a1 descriptionLong:(id)a2 descriptionShort:(id)a3 paymentNetwork:(long long)a4 serialNumber:(id)a5 suffix:(id)a6;

@end
