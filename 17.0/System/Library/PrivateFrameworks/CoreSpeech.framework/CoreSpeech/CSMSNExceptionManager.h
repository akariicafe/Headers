@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSMSNExceptionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *announceMessageExceptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)beginAnnounceMessageException:(id)a0 reason:(id)a1;
- (void)endAnnounceMessageException:(id)a0 reason:(id)a1;

@end
