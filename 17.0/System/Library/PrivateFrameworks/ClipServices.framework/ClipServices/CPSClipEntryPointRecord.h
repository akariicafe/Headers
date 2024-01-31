@class NSString;

@interface CPSClipEntryPointRecord : NSObject

@property (copy, nonatomic) NSString *appClipBundleID;
@property (copy, nonatomic) NSString *webClipIdentifier;
@property (nonatomic) double lastABRFetchTime;

- (id)initWithSQLiteRow:(id)a0;
- (void).cxx_destruct;

@end
