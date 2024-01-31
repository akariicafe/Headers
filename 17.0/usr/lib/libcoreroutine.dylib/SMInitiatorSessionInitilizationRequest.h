@class NSUUID, SMHandle, NSDate;

@interface SMInitiatorSessionInitilizationRequest : NSObject

@property (readonly, nonatomic) NSUUID *sessionID;
@property (readonly, nonatomic) SMHandle *handle;
@property (readonly, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) NSDate *startDate;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSessionID:(id)a0 handle:(id)a1 handler:(id /* block */)a2;

@end
