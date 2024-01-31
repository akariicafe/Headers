@class NSError;

@interface FSFileSystem : NSObject

@property (retain) NSError *errorState;
@property int containerState;

- (void).cxx_destruct;

@end
