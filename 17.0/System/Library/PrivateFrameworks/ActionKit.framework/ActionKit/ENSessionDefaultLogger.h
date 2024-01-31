@class NSString;

@interface ENSessionDefaultLogger : NSObject <ENSDKLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)evernoteLogErrorString:(id)a0;
- (void)evernoteLogInfoString:(id)a0;

@end
