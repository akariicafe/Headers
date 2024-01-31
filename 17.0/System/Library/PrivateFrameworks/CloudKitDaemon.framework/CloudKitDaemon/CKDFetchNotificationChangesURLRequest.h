@class NSData, NSMutableArray;

@interface CKDFetchNotificationChangesURLRequest : CKDURLRequest

@property (retain, nonatomic) NSData *serverChangeTokenData;
@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (nonatomic) BOOL moreComing;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic) BOOL wantsChanges;
@property (readonly, nonatomic) NSMutableArray *resultChangedNotifications;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 serverChangeTokenData:(id)a1;

@end
