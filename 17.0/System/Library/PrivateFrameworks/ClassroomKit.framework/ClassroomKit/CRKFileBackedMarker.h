@class NSString, NSURL;

@interface CRKFileBackedMarker : NSObject <CRKMarker> {
    NSURL *mFileURL;
}

@property (readonly, nonatomic) BOOL exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)deleteWithError:(id *)a0;
- (BOOL)createWithError:(id *)a0;

@end
