@class NSString;

@interface EKPersistentChangeStoreRowInfo : NSObject

@property (retain, nonatomic) NSString *clientIdentifier;
@property (nonatomic) int consumedSequenceNumber;

- (id)description;
- (void).cxx_destruct;

@end
