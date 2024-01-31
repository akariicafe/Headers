@class NSSet, NSArray, ECMessageFlagChange, NSString, NSURL;

@interface ECFlagChangeMessageAction : ECLocalMessageAction <ECFlagChangeMessageActionBuilder>

@property (copy, nonatomic) NSSet *remoteIDs;
@property (copy, nonatomic) NSArray *messages;
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
