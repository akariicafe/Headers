@class NSString, MBSnapshotIdentifier;

@interface DMCRFMBSnapshotIdentifier : NSObject <DMCRFSnapshotIdentifier>

@property (readonly, nonatomic) MBSnapshotIdentifier *wrappedValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMBSnapshotIdentifier:(id)a0;

@end
