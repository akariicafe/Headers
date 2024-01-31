@class NSTimeZone, NSString, NSDate;

@interface _ATXDNDTransition : NSObject <ATXTimedEventProtocol>

@property (readonly, nonatomic) NSDate *transitionTime;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) BOOL isStartOfDND;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventTime;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTransitionTime:(id)a0 timeZone:(id)a1 isStartOfDND:(BOOL)a2;
- (id)prettyRepresentation;

@end
