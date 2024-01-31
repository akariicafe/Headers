@class NSObject;
@protocol OS_dispatch_group;

@interface XRRunLoopTicket : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (nonatomic) BOOL stopWhenDone;

- (void).cxx_destruct;

@end
