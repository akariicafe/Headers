@class NSData;

@interface _SYOutputDataItem : NSObject

@property (copy, nonatomic) NSData *data;
@property (nonatomic) unsigned long long bytesSent;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
