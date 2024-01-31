@class HLPURLSessionItem, NSURL, NSDictionary;

@interface HLPRemoteDataController : NSObject

@property (retain, nonatomic) HLPURLSessionItem *URLSessionItem;
@property (nonatomic) BOOL loading;
@property (nonatomic) BOOL hasLoaded;
@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSDictionary *headerFields;

- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void)clearData;
- (void).cxx_destruct;
- (void)cancel;
- (void)fetchDataWithDataType:(long long)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)processData:(id)a0 formattedData:(id)a1;
- (void)processFileURLWithCompletionHandler:(id /* block */)a0;

@end
