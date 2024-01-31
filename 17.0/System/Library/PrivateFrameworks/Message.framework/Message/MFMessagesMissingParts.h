@class NSArray, NSIndexSet;

@interface MFMessagesMissingParts : NSObject

@property (readonly, copy, nonatomic) NSArray *fragmentedMessages;
@property (readonly, copy, nonatomic) NSIndexSet *nonFragmentedMessages;
@property (readonly, nonatomic) long long messagesScannedInFilesystemCount;

- (void).cxx_destruct;

@end
