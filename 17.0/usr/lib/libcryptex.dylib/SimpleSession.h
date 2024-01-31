@class NSObject;
@protocol OS_session;

@interface SimpleSession : NSObject

@property (retain) NSObject<OS_session> *session;

- (id)initWithFlags:(unsigned long long)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSessionCore:(id)a0;

@end
