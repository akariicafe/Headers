@class NSString;

@interface AppTelemetryFPFSMigrationInvestigation : PBCodable <NSCopying> {
    struct { unsigned char accountQuotaUsage : 1; unsigned char bouncedItemsCount : 1; unsigned char bouncedItemsMatrix : 1; unsigned char busyDateNotMigratedCount : 1; unsigned char childItemsNotMigratedCount : 1; unsigned char ignoredFromSyncItemsNotMigratedCount : 1; unsigned char importTime : 1; unsigned char itemsMigratedWithoutAlreadyMayExistFlag : 1; unsigned char itemsNotFoundInDB : 1; unsigned char itemsNotMigratedCount : 1; unsigned char itemsReconciledInFileProvider : 1; unsigned char totalItemCount : 1; unsigned char typesOfMigratedItemsMask : 1; unsigned char typesOfNonMigratedItemsMask : 1; unsigned char isAccountDataSeparated : 1; unsigned char isSuccessful : 1; } _has;
}

@property (nonatomic) BOOL hasIsSuccessful;
@property (nonatomic) BOOL isSuccessful;
@property (nonatomic) BOOL hasItemsNotMigratedCount;
@property (nonatomic) long long itemsNotMigratedCount;
@property (nonatomic) BOOL hasTotalItemCount;
@property (nonatomic) long long totalItemCount;
@property (nonatomic) BOOL hasAccountQuotaUsage;
@property (nonatomic) long long accountQuotaUsage;
@property (nonatomic) BOOL hasIsAccountDataSeparated;
@property (nonatomic) BOOL isAccountDataSeparated;
@property (nonatomic) BOOL hasImportTime;
@property (nonatomic) double importTime;
@property (nonatomic) BOOL hasTypesOfMigratedItemsMask;
@property (nonatomic) int typesOfMigratedItemsMask;
@property (nonatomic) BOOL hasTypesOfNonMigratedItemsMask;
@property (nonatomic) int typesOfNonMigratedItemsMask;
@property (nonatomic) BOOL hasItemsNotFoundInDB;
@property (nonatomic) long long itemsNotFoundInDB;
@property (nonatomic) BOOL hasBouncedItemsCount;
@property (nonatomic) long long bouncedItemsCount;
@property (nonatomic) BOOL hasBouncedItemsMatrix;
@property (nonatomic) long long bouncedItemsMatrix;
@property (readonly, nonatomic) BOOL hasTreatmentId;
@property (retain, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasRampId;
@property (retain, nonatomic) NSString *rampId;
@property (nonatomic) BOOL hasBusyDateNotMigratedCount;
@property (nonatomic) long long busyDateNotMigratedCount;
@property (nonatomic) BOOL hasChildItemsNotMigratedCount;
@property (nonatomic) long long childItemsNotMigratedCount;
@property (nonatomic) BOOL hasIgnoredFromSyncItemsNotMigratedCount;
@property (nonatomic) long long ignoredFromSyncItemsNotMigratedCount;
@property (nonatomic) BOOL hasItemsReconciledInFileProvider;
@property (nonatomic) long long itemsReconciledInFileProvider;
@property (nonatomic) BOOL hasItemsMigratedWithoutAlreadyMayExistFlag;
@property (nonatomic) long long itemsMigratedWithoutAlreadyMayExistFlag;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
