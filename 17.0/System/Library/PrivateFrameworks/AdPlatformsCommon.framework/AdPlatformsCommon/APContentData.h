@class NSDate, NSString, NSUUID, NSURL, NSError, APInstallAttribution, NSDictionary, NSArray, NSMutableSet;

@interface APContentData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *identifier;
@property (retain) NSUUID *contextIdentifier;
@property (nonatomic) BOOL isLocationAvailableForAd;
@property (nonatomic) BOOL isPAAvailableForAd;
@property (retain) NSString *uniqueIdentifier;
@property (retain) NSString *journeyIdentifier;
@property (retain) NSDictionary *metadata;
@property (retain) NSURL *disclosureURL;
@property (retain) NSString *disclosureRendererPayload;
@property (retain) NSString *targetingExpressionId;
@property double impressionThreshold;
@property double impressionVisibilityThreshold;
@property unsigned long long minimumTimeBetweenPresentation;
@property (retain) NSMutableSet *representations;
@property (retain) NSString *brandName;
@property (retain) NSString *campaignText;
@property (retain) NSError *error;
@property (retain) NSDate *expirationDate;
@property long long serverUnfilledReason;
@property (retain) NSString *humanReadableName;
@property (nonatomic) double serverResponseReceivedTimestamp;
@property (retain, nonatomic) NSDate *receivedReferenceTime;
@property (retain) APInstallAttribution *installAttribution;
@property (readonly) long long pricingModel;
@property (retain, nonatomic) NSArray *adServerEnvironment;

+ (id)createForServerUnfilledReason:(long long)a0 placementType:(long long)a1 contextIdentifier:(id)a2;
+ (id)createForServerUnfilledReason:(long long)a0 placementType:(long long)a1 contextIdentifier:(id)a2 size:(struct { double x0; double x1; })a3;
+ (id)mockDataFromContext:(id)a0 types:(id)a1;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)addRepresentation:(id)a0;
- (void)_correctNonNullableFields;
- (void)addRepresentations:(id)a0;
- (id)getRepresentation;
- (BOOL)hasValidRepresentation;
- (void)removeRepresentation:(id)a0;
- (id)representationWithIdentifier:(id)a0;

@end
