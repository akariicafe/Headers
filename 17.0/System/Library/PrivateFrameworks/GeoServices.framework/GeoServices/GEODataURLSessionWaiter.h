@class NSString, GEODataURLSession, GEODataURLSessionTask;

@interface GEODataURLSessionWaiter : NSObject <GEOCancellable, GEODataURLSessionTaskDelegate> {
    GEODataURLSession *_session;
    GEODataURLSessionTask *_task;
    id /* block */ _handler;
    id _strongReferenceToSelf;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
