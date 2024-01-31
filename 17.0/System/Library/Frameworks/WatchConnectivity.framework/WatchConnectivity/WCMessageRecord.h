@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface WCMessageRecord : NSObject

@property (readonly) BOOL expectsResponse;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) id /* block */ errorHandler;
@property (retain) NSObject<OS_dispatch_source> *timeoutTimer;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 errorHandler:(id /* block */)a1;

@end
