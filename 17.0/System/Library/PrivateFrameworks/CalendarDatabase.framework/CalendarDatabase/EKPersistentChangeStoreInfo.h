@class NSString;

@interface EKPersistentChangeStoreInfo : NSObject

@property (nonatomic) int minConsumedSequenceNumber;
@property (retain, nonatomic) NSString *minConsumedClientIdentifier;
@property (nonatomic) int secondMinConsumedSequenceNumber;

- (id)description;
- (void).cxx_destruct;

@end
