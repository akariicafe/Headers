@class NSString;

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester>

@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapshotRequesterWitHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)mapSnapshotCreator:(id)a0 didCreateSnapshot:(id)a1 attributionString:(id)a2 context:(id)a3;

@end
