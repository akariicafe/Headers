@class IDSCKRecordID;
@protocol IDSCKRecordKeyValueSetting;

@interface IDSCKRecord : NSObject

@property (readonly, copy, nonatomic) IDSCKRecordID *recordID;
@property (readonly, nonatomic) id<IDSCKRecordKeyValueSetting> encryptedValuesByKey;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
