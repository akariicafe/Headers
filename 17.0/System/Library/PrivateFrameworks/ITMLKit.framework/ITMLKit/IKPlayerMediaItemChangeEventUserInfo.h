@class NSDictionary, NSString;

@interface IKPlayerMediaItemChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithReason:(long long)a0;

@end
