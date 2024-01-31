@class NSString, NSMutableArray;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor>

@property BOOL didReset;
@property BOOL hasChanges;
@property (retain) NSMutableArray *insertedContacts;
@property (retain) NSMutableArray *updatedContacts;
@property (retain) NSMutableArray *deletedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)visitUpdateContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;

@end
