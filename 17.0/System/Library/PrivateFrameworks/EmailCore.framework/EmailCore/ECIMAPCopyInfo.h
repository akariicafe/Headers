@class NSDictionary;

@interface ECIMAPCopyInfo : NSObject

@property (nonatomic) unsigned int uidValidity;
@property (retain, nonatomic) NSDictionary *sourceUIDsToDestinationUIDs;

- (void).cxx_destruct;

@end
