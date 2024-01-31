@class NSDate;

@interface STStorageActionTipItem : NSObject

@property long long size;
@property (getter=isRecoverable) BOOL recoverable;
@property (retain) NSDate *lastUsedDate;
@property (retain) NSDate *createdDate;

- (void).cxx_destruct;

@end
