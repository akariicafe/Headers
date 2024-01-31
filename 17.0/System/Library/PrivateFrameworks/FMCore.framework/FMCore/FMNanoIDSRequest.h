@class NSString, FMDispatchTimer;

@interface FMNanoIDSRequest : NSObject

@property (retain, nonatomic) NSString *idsMessageID;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (retain, nonatomic) FMDispatchTimer *timer;

- (void).cxx_destruct;

@end
