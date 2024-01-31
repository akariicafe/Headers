@class NSString;

@interface SSVMediaSocialPostExternalDestination : NSObject <NSCopying, SSXPCCoding>

@property (copy, nonatomic) NSString *pageAccessToken;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSString *accessToken;
@property (copy, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
