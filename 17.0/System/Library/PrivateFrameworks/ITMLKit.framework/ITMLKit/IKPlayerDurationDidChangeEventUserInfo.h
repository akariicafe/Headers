@class NSDictionary, NSString;

@interface IKPlayerDurationDidChangeEventUserInfo : NSObject <IKPlayerEventMarshaling>

@property (readonly, nonatomic) double newDuration;
@property (readonly, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNewDuration:(double)a0;

@end
