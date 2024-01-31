@class FTServiceStatus;

@interface FTiMessageStatus : NSObject

@property (readonly, nonatomic) FTServiceStatus *serviceStatus;
@property (readonly, nonatomic) BOOL iMessageSupported;

+ (id)sharedInstance;

- (id)initPrivate;
- (void).cxx_destruct;

@end
