@class NSString;

@interface BLSHEnsureFlipbookCurrentOperation : NSObject <BLSHPendingOperation>

@property (readonly) long long type;
@property (getter=isStarted) BOOL started;
@property (getter=isCompleted) BOOL completed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)operation;


@end
