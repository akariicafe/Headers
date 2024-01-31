@class NSString;

@interface BMComputeXPCPublisherClientDomainConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long domain;
@property (readonly, copy, nonatomic) NSString *machServiceName;
@property (readonly, copy, nonatomic) NSString *XPCPublisherStreamName;
@property (readonly, copy, nonatomic) NSString *biomeLaunchNotification;

- (id)initWithDomain:(unsigned long long)a0;
- (void).cxx_destruct;

@end
