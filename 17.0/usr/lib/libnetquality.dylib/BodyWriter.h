@class NSObject;
@protocol OS_nw_connection, OS_dispatch_data;

@interface BodyWriter : NSObject

@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_data> *postData;
@property (nonatomic) unsigned long long bytesLeftToPost;
@property (nonatomic) unsigned int postWriteSize;
@property (nonatomic) unsigned int totalExpectedBytes;

- (void).cxx_destruct;
- (void)sendBodyDataWithContext:(id)a0;

@end
