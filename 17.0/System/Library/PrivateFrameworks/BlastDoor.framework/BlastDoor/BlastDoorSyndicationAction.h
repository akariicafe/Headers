@class NSString, BlastDoorGroupContext;

@interface BlastDoorSyndicationAction : NSObject {
    void /* unknown type, empty encoding */ syndicationAction;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned char itemType;
@property (nonatomic, readonly) unsigned char actionType;
@property (nonatomic, readonly) unsigned long long encodedSyndicationStartDate;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } syndicatedMessagePartRange;
@property (nonatomic, readonly) NSString *messagePartGUID;
@property (nonatomic, readonly) BlastDoorGroupContext *groupContext;
@property (nonatomic, readonly) unsigned char version;

- (id)init;
- (void).cxx_destruct;

@end
