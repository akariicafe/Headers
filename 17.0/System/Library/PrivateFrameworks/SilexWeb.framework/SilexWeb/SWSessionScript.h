@class NSString, WKUserScript;
@protocol SWSession;

@interface SWSessionScript : NSObject <SWScript>

@property (readonly, nonatomic) id<SWSession> session;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) WKUserScript *userScript;
@property (readonly, nonatomic) NSString *executableScript;
@property (readonly, nonatomic) BOOL queueable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;

@end
