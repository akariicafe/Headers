@class NSString;

@interface MTImageDownloadClientRequest : NSObject

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) id /* block */ completion;
@property (readonly, nonatomic) NSString *uuid;

+ (id)requestForUrl:(id)a0 key:(id)a1 podcastUuid:(id)a2 completion:(id /* block */)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 key:(id)a1 podcastUuid:(id)a2 completion:(id /* block */)a3;

@end
