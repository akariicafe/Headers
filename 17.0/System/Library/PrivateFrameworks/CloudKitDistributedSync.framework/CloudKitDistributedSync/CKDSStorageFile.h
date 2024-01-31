@class NSURL;

@interface CKDSStorageFile : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL isOwned;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 isOwned:(BOOL)a1;

@end
