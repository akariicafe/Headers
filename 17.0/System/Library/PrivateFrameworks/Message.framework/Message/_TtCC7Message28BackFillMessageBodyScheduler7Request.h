@class NSString;

@interface _TtCC7Message28BackFillMessageBodyScheduler7Request : NSObject <MFBackFillingMessageBodyDownloadRequest> {
    void /* unknown type, empty encoding */ activity;
    void /* unknown type, empty encoding */ activityID;
    void /* unknown type, empty encoding */ id;
}

@property (nonatomic, readonly) BOOL shouldDefer;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)completeWithStatus:(int)a0;

@end
