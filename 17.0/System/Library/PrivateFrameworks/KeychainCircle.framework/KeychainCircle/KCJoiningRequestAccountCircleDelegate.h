@class NSString;

@interface KCJoiningRequestAccountCircleDelegate : NSObject <KCJoiningRequestCircleDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegate;

- (struct __OpaqueSOSPeerInfo { } *)copyPeerInfoError:(id *)a0;
- (BOOL)processCircleJoinData:(id)a0 version:(int)a1 error:(id *)a2;

@end
