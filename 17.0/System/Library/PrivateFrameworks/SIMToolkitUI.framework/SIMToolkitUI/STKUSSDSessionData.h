@class NSString;

@interface STKUSSDSessionData : NSObject <BSXPCCoding>

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) BOOL allowsResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
