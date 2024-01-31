@class NSString, NSMutableDictionary;

@interface _SBSceneHandleObserverToken : NSObject <SBSceneHandleObserverToken>

@property (readonly, weak, nonatomic) NSMutableDictionary *owner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOwner:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
