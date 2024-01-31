@class NSString, TSUURLTrackerFilePresenter, NSURL, NSData;

@interface TSUURLTracker : NSObject <TSUURLWrapper> {
    TSUURLTrackerFilePresenter *_filePresenter;
}

@property (readonly) NSURL *URL;
@property (readonly) NSData *bookmarkData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (id)initWithURL:(id)a0;
- (id)init;
- (void)dealloc;
- (void)stop;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithBookmarkData:(id)a0;
- (id)URLAndReturnError:(id *)a0;
- (id)initWithBookmarkData:(id)a0 delegate:(id)a1;
- (id)initWithURL:(id)a0 bookmarkData:(id)a1 delegate:(id)a2;
- (id)initWithURL:(id)a0 delegate:(id)a1;

@end
