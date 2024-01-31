@class NSSet, NSArray, NSString, NSURL;

@interface ECLabelChangeMessageAction : ECLocalMessageAction <ECLabelChangeMessageActionBuilder>

@property (copy, nonatomic) NSSet *remoteIDs;
@property (copy, nonatomic) NSArray *messages;
@property (copy, nonatomic) NSSet *labelsToAdd;
@property (copy, nonatomic) NSSet *labelsToRemove;
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
