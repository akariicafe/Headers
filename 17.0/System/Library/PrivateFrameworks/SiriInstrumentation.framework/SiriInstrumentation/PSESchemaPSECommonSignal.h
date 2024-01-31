@class NSString, NSData;

@interface PSESchemaPSECommonSignal : SISchemaInstrumentationMessage {
    struct { unsigned char eventDonationTimeInSecondsSince2001 : 1; unsigned char isDonatedBySiri : 1; unsigned char hasUserInitiatedFollowup : 1; unsigned char appFollowup : 1; unsigned char appLaunchTimeInSecondsSince2001 : 1; unsigned char appLaunchReason : 1; } _has;
}

@property (nonatomic) double eventDonationTimeInSecondsSince2001;
@property (nonatomic) BOOL hasEventDonationTimeInSecondsSince2001;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) BOOL hasDomain;
@property (copy, nonatomic) NSString *action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int isDonatedBySiri;
@property (nonatomic) BOOL hasIsDonatedBySiri;
@property (nonatomic) BOOL hasUserInitiatedFollowup;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) int appFollowup;
@property (nonatomic) BOOL hasAppFollowup;
@property (nonatomic) double appLaunchTimeInSecondsSince2001;
@property (nonatomic) BOOL hasAppLaunchTimeInSecondsSince2001;
@property (nonatomic) int appLaunchReason;
@property (nonatomic) BOOL hasAppLaunchReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)deleteAction;
- (id)initWithJSON:(id)a0;
- (void)deleteAppFollowup;
- (void)deleteAppLaunchReason;
- (void)deleteAppLaunchTimeInSecondsSince2001;
- (void)deleteDomain;
- (void)deleteEventDonationTimeInSecondsSince2001;
- (void)deleteHasUserInitiatedFollowup;
- (void)deleteIsDonatedBySiri;

@end
