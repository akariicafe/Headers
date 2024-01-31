@class NSString, NSData, NSDate;

@interface BlastDoorCollaborationNotice : NSObject {
    void /* unknown type, empty encoding */ collaborationNotice;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSString *guidString;
@property (nonatomic, readonly) NSData *highlightEvent;
@property (nonatomic, readonly) unsigned long long highlightEventType;
@property (nonatomic, readonly) NSDate *noticeDate;

- (id)init;
- (void).cxx_destruct;

@end
