@class NSString, EMObjectID, NSDate, EMReadLater;

@interface EDSortableMessage : EMObject <EDSortableMessage>

@property (readonly) NSDate *date;
@property (readonly) NSDate *displayDate;
@property (readonly) EMReadLater *readLater;
@property (readonly) NSDate *sendLaterDate;
@property (readonly, copy, nonatomic) EMObjectID *objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 date:(id)a1 displayDate:(id)a2 readLater:(id)a3 sendLaterDate:(id)a4;

@end
