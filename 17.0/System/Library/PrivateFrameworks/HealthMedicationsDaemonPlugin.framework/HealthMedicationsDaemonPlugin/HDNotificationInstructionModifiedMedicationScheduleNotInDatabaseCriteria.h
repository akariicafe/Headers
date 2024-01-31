@class NSUUID, NSDate;

@interface HDNotificationInstructionModifiedMedicationScheduleNotInDatabaseCriteria : HDNotificationInstructionCriteria {
    NSUUID *_UUID;
    NSDate *_modificationDate;
}

+ (BOOL)supportsSecureCoding;
+ (id)criteriaIdentifier;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageDictionary:(id)a0;
- (id)messageDictionary;
- (long long)isValidWithDatabaseTransaction:(id)a0 error:(id *)a1;
- (id)initWithUUID:(id)a0 modificationDate:(id)a1;

@end
