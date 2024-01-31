@class NSString, SGDuplicateKey, SGStorageLocation;

@interface SGStorageReminder : SGReminder

@property (readonly, nonatomic) SGDuplicateKey *duplicateKey;
@property (readonly, nonatomic) SGStorageLocation *dueStorageLocation;
@property (readonly, nonatomic) NSString *sourceKey;

+ (id)storageReminderFromDuplicateKey:(id)a0 store:(id)a1;
+ (id)storageReminderFromEntity:(id)a0 origin:(id)a1;
+ (id)storageReminderFromEntity:(id)a0 store:(id)a1;
+ (id)storageReminderFromRecordId:(id)a0 store:(id)a1;
+ (id)storageReminderWithPrimaryKey:(long long)a0 store:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)loggingIdentifier;
- (long long)commitWithStore:(id)a0;
- (id)initWithRecordId:(id)a0 duplicateKey:(id)a1 sourceKey:(id)a2 origin:(id)a3 dueDate:(id)a4 dueLocationType:(unsigned char)a5 dueLocation:(id)a6 dueLocationTrigger:(unsigned char)a7 title:(id)a8 reminderStatus:(unsigned char)a9 contactIdentifier:(id)a10 creationDate:(id)a11;
- (BOOL)isEqualToStorageReminder:(id)a0;
- (id)toReminder;

@end
