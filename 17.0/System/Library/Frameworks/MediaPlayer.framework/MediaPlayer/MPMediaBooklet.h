@class NSString;

@interface MPMediaBooklet : NSObject

@property (nonatomic) unsigned long long itemPersistentID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long storeItemID;
@property (copy, nonatomic) NSString *redownloadParams;
@property (nonatomic) long long fileSize;

- (id)description;
- (void).cxx_destruct;

@end
