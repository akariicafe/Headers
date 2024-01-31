@class NSData, NSObject;
@protocol OS_dispatch_data;

@interface MTLLoadedFileContentsWrapper : NSObject

@property (readonly, nonatomic) NSData *sourceContents;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *dispatchData;
@property (readonly, nonatomic) const void *bytes;
@property (readonly, nonatomic) unsigned long long length;

- (void)dealloc;
- (id)initWithData:(id)a0;

@end
