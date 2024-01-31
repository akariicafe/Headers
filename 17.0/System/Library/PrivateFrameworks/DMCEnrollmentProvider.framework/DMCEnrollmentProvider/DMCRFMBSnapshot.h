@class NSString, MBSnapshot, NSDate;
@protocol DMCRFSnapshotIdentifier;

@interface DMCRFMBSnapshot : NSObject <DMCRFSnapshot>

@property (retain, nonatomic) MBSnapshot *snapshot;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) id<DMCRFSnapshotIdentifier> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)snapshotIdentifierFromSnapshot:(id)a0;

- (id)initWithSnapshot:(id)a0;
- (void).cxx_destruct;

@end
