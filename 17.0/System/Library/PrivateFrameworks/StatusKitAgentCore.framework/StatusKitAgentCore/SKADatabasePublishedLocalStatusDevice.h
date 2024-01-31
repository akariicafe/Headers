@class NSString, NSArray;

@interface SKADatabasePublishedLocalStatusDevice : NSObject

@property (retain, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSArray *pendingStatuses;
@property (retain, nonatomic) NSArray *deliveredStatuses;

- (void).cxx_destruct;
- (id)initWithCoreDataPulishedLocalStatusDevice:(id)a0;
- (id)initWithIDSIdentifier:(id)a0 pendingStatuses:(id)a1 deliveredStatuses:(id)a2;

@end
