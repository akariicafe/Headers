@class NSString, NSURL, ECMessageFlagChange;

@interface ECFlagChangeUndownloadedMessageAction : ECLocalMessageAction <ECFlagChangeUndownloadedMessageActionBuilder>

@property (copy, nonatomic) NSString *oldestPersistedRemoteID;
@property (retain, nonatomic) ECMessageFlagChange *flagChange;
@property (retain, nonatomic) NSString *messageActionPersistentID;
@property (retain, nonatomic) NSURL *mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBuilder:(id /* block */)a0;
- (void).cxx_destruct;

@end
