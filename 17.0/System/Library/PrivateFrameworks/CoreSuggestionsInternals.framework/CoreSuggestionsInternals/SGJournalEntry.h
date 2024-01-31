@class SGStorageReminder, NSArray, SGStorageEvent, SGStorageContact;

@interface SGJournalEntry : NSObject

@property (readonly, nonatomic) unsigned long long operation;
@property (readonly, nonatomic) SGStorageEvent *event;
@property (readonly, nonatomic) NSArray *eventBatch;
@property (readonly, nonatomic) SGStorageContact *contact;
@property (readonly, nonatomic) SGStorageReminder *reminder;

- (id)init;
- (id)initWithOperation:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOperation:(unsigned long long)a0 contact:(id)a1;
- (id)initWithOperation:(unsigned long long)a0 event:(id)a1;
- (id)initWithOperation:(unsigned long long)a0 eventBatch:(id)a1;
- (id)initWithOperation:(unsigned long long)a0 reminder:(id)a1;
- (BOOL)isEqualToJournalEntry:(id)a0;

@end
