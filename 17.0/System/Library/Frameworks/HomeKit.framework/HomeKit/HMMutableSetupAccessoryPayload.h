@class NSString, NSURL, NSNumber, HMCHIPAccessorySetupPayload;

@interface HMMutableSetupAccessoryPayload : HMSetupAccessoryPayload

@property (copy, nonatomic) NSURL *setupPayloadURL;
@property (copy, nonatomic) NSString *setupID;
@property (copy, nonatomic) NSNumber *categoryNumber;
@property (copy, nonatomic) NSString *productNumber;
@property (nonatomic) BOOL supportsIP;
@property (nonatomic) BOOL supportsWAC;
@property (nonatomic) BOOL supportsBTLE;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (copy, nonatomic) NSNumber *threadIdentifier;
@property (retain, nonatomic) HMCHIPAccessorySetupPayload *chipAccessorySetupPayload;

@end
