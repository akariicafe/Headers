@class SOAuthorizationCore;
@protocol SOAuthorizationCoreDelegate;

@interface SOAuthorizationPoolItem : NSObject

@property (readonly, nonatomic) SOAuthorizationCore *authorization;
@property (readonly, nonatomic) id<SOAuthorizationCoreDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithAuthorization:(id)a0 delegate:(id)a1;

@end
