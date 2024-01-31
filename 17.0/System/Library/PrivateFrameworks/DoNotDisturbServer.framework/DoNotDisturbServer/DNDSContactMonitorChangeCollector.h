@class NSString, NSMutableArray, NSSet;

@interface DNDSContactMonitorChangeCollector : NSObject <CNChangeHistoryEventVisitor> {
    NSSet *_monitoredContactIdentifiers;
}

@property (readonly, copy, nonatomic) NSMutableArray *updatedContacts;
@property (readonly, copy, nonatomic) NSMutableArray *deletedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (id)initWithMonitoredContactIdentifiers:(id)a0;

@end
