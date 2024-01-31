@class NSString, NSDate, EMThreadObjectID, EMReadLater;

@interface EDSortableThreadItem : EMObject <EDSortableMessage>

@property (readonly, copy, nonatomic) EMThreadObjectID *objectID;
@property (retain) NSDate *date;
@property (retain) NSDate *displayDate;
@property (retain) EMReadLater *readLater;
@property (retain) NSDate *sendLaterDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (void).cxx_destruct;
- (id)initWithThreadObjectID:(id)a0;

@end
