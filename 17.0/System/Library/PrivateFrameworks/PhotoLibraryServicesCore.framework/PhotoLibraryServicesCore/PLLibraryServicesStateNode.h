@class NSString, NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject

@property (readonly, copy) NSString *logPrefix;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) unsigned int qos;

- (void)terminate;
- (void)run;
- (id)description;
- (void).cxx_destruct;
- (id)initWithLibraryServicesState:(long long)a0 qualityOfService:(unsigned int)a1 logPrefix:(id)a2;

@end
