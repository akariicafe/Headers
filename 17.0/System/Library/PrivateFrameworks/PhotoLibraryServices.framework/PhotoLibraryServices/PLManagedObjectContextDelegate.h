@class NSString;
@protocol NSSQLiteDatabaseTraceDelegate;

@interface PLManagedObjectContextDelegate : NSObject <NSSQLiteDatabaseTraceDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchRecorderLock;
    id<NSSQLiteDatabaseTraceDelegate> _fetchRecorder;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fetchInstrumentationLock;
    id<NSSQLiteDatabaseTraceDelegate> _fetchInstrumentation;
}

@property (weak) id<NSSQLiteDatabaseTraceDelegate> fetchRecorder;
@property (weak) id<NSSQLiteDatabaseTraceDelegate> fetchInstrumentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)managedObjectContext:(id)a0 didExecuteFetchRequest:(id)a1 withSQLString:(id)a2 bindVariables:(id)a3 rowCount:(long long)a4;
- (void)managedObjectContext:(id)a0 willExecuteFetchRequest:(id)a1;

@end
