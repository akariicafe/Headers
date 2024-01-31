@class NSFileManager;

@interface IMDDonationManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)copyGroupPhotoToExternalPathIfNecessary:(id)a0 chatGUID:(id)a1 attachmentFilepath:(id)a2;

@end
